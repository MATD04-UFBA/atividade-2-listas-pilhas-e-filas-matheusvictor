#include "Simulador.h"
#include "Carta.h"

char opcao;

Simulador::Simulador(int quantidadeJogadores) { 
    this->baralho = new ACE;
    this->mico = new Carta;
    this->jogadores = new ListaJogadores;
    this->contadorRodadas = 0;
    this->quantidadeJogadores = quantidadeJogadores;
}

Simulador::~Simulador() { }

void Simulador::iniciarJogo() {    
    this->baralho->inicializarACE();
    
    cout << "===========================================================================================" << endl;
    cout << "Baralho inicializado! Deseja Deseja imprimi-lo antes de embaralha-lo? ";
    
    this->exibirOpcoesEscolha();

    if (this->verificarOpcaoDeEscolha(opcao)) {
        this->baralho->imprimir();
    }

    system("pause");
    system("cls");

    this->baralho->embaralhar(); 
    cout << "Baralho foi embaralhado e o Mico foi retirado! Deseja Deseja imprimir o Mico? ";
    this->mico = this->baralho->pegarCarta();

    do {
        cout << "[S/N] = ";
        cin >> opcao;
    } while ((char) toupper(opcao) != 'S' && (char) toupper(opcao) != 'N');

     if ((char) toupper(opcao) == 'S') {
        cout << "===========================================================================================" << endl;
        cout << "MICO: ";
        this->mico->obterDetalhesCarta();
        cout << "===========================================================================================" << endl;
    }
    
    system("pause");
    system("cls");
    
    this->iniciarJogadores();
    this->distribuirCartas();
    
    cout << "Jogadores incializados e cartas distribuidas!" << endl;

    this->ordernarMaoJogadores();
    this->iniciarSeparacaoParesCartas();
    cout << "Todos os jogadores tiveram suas cartas ordenadas e pares separados (caso possuam) antes das rodadas comecarem." << endl;
    
    system("pause");
    system("cls");

    this->jogadores->sortearInicioLista();
    cout << this->jogadores->obterInicioLista()->obterDado()->obterNome() << " foi sorteado para comecar o jogo!" << endl;

    system("pause");
    system("cls");

    No* no = this->jogadores->obterInicioLista();
    int posicaoCartaARemoverDoOponente;
    // laço responsável por manter o jogo em continuação até que haja apenas 1 jogador
    do {
        // inicio laço superior

        // laço responsável por executar uma rodada (cada jogador joga)
        do {
            
            // talvez nao precise disso, apenas mover o conteudo para o laço superior 
            if (no == this->jogadores->obterInicioLista()) {
                this->contadorRodadas++;
                cout << "===========================================================================================" << endl;
                cout << "NUMERO DA RODADA: " << this->contadorRodadas << endl;
            }

            cout << "====================================== TURNO DO " << no->obterDado()->obterNome() << " ==================================" << endl; 
            system("pause");
        
            no->obterDado()->imprimirDetalhes();
                                
            int tamanhoMaoOponente = no->obterProximo()->obterDado()->obterMao().size();        
            do {
                cout << "Digite a posicao entre 0 e " << tamanhoMaoOponente - 1 << " da carta que deseja remover da mao de " << no->obterProximo()->obterDado()->obterNome() << " = ";
                cin >> posicaoCartaARemoverDoOponente;
            } while (posicaoCartaARemoverDoOponente >= tamanhoMaoOponente || posicaoCartaARemoverDoOponente < 0);

            no->obterDado()->pegarCartaOponente(no->obterProximo()->obterDado(), posicaoCartaARemoverDoOponente);
            no->obterDado()->ordenarMao();
            no->obterDado()->separarPares();

            cout << "Deseja imprimir novamente os detalhes do jogador atual? ";

            do {
                cout << "[S/N] = ";
                cin >> opcao;
            } while ((char) toupper(opcao) != 'S' && (char) toupper(opcao) != 'N');

            if ((char) toupper(opcao) == 'S') {
                no->obterDado()->imprimirDetalhes();
                system("pause");
            }
            
            if (no->obterDado()->temMaoVazia()) {
                cout << "Removendo jogador " << no->obterDado()->obterNome();
                this->jogadores->removerJogador(no);
                break;
            }
            
            if(no->obterProximo()->obterDado()->temMaoVazia()) {
                cout << "Removendo jogador " << no->obterProximo()->obterDado()->obterNome() << endl;
                this->jogadores->removerJogador(no->obterProximo());
                break;
            }
            
            system("cls");
            no = no->obterProximo();

        } while (no->obterProximo() != this->jogadores->obterInicioLista()->obterProximo());

    } while(this->jogadores->tamanho() > 1);

    cout << this->jogadores->obterInicioLista()->obterDado()->obterNome() << " perdeu!" << endl;
    cout << "O mico eh: "; this->mico->obterDetalhesCarta();
    cout << " Mao do perdedor: ";
    this->jogadores->obterInicioLista()->obterDado()->exibirMao();
}

void Simulador::iniciarJogadores() {
    
    if (this->quantidadeJogadores < 2) {
        std::cout << "Assumindo o valor minimo de 2 jogadores..." << std::endl;
        this->quantidadeJogadores = MIN_JOGADORES;
    } else if (this->quantidadeJogadores > 4) {
        std::cout << "Assumindo o valor maximo de 4 jogadores..." << std::endl;
        this->quantidadeJogadores = MAX_JOGADORES;
    }

    for (int i = 0; i < this->quantidadeJogadores; i++) {
        int numero = this->jogadores->tamanho() + 1;
        Jogador* j = new Jogador("Player " + std::to_string(numero));
        this->jogadores->inserirJogador(j);
    }

}

void Simulador::distribuirCartas() {
    
    No* no = this->jogadores->obterInicioLista();

    while (!this->baralho->isDeckVazio()) {        
        Carta* c = this->baralho->pegarCarta();
        no->obterDado()->addCartaMao(c);
        no = no->obterProximo();        
    }    

}

void Simulador::ordernarMaoJogadores() {
    No* no = this->jogadores->obterInicioLista();
    do {           
        no->obterDado()->ordenarMao();
        no = no->obterProximo();
    } while (no->obterProximo() != this->jogadores->obterInicioLista()->obterProximo());
}

void Simulador::exibirMaoJogador(Jogador* j) {
    j->exibirNumeroCartasMao();
}

bool Simulador::verificarCartasJogadores() {
    return true;
}

void Simulador::iniciarSeparacaoParesCartas() {
    No* no = this->jogadores->obterInicioLista();
    do {              
        no->obterDado()->separarPares();
        no = no->obterProximo();
    } while (no->obterProximo() != this->jogadores->obterInicioLista()->obterProximo());
}

void Simulador::exibirOpcoesEscolha() {
    do {
        cout << "[S/N] = ";
        cin >> opcao;
    } while ((char) toupper(opcao) != 'S' && (char) toupper(opcao) != 'N');
}

bool Simulador::verificarOpcaoDeEscolha(char opc) {
    return (char) toupper(opcao) == 'S';
}
