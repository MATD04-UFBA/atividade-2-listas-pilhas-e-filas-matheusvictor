#include "Simulador.h"
#include "Carta.h"


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
    
    // cout << "Baralho inicializado! Deseja Deseja imprimi-lo antes de embaralha-lo? = ";
    // this->baralho->imprimir();

    this->baralho->embaralhar();    
    // cout << "O Mico foi retirado! Deseja Deseja imprimir o Mico [S/N] = ";
    Carta* mico = this->baralho->pegarCarta();
    // mico->obterDetalhesCarta();

    this->iniciarJogadores();
    this->distribuirCartas();

}

void Simulador::iniciarJogadores() {

    if (this->quantidadeJogadores < 2) {
        std::cout << "Valor invalido! Assumindo o valor minimo de 2 jogadores..." << std::endl;
        this->quantidadeJogadores = MIN_JOGADORES;
    } else if (this->quantidadeJogadores > 4) {
        std::cout << "Valor invalido! Assumindo o valor maximo de 4 jogadores..." << std::endl;
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

void Simulador::iniciarPartida() { 
    while (verificarCartasJogadores()) {

    }
}

void Simulador::exibirMaoJogador(Jogador* j) {
    j->exibirNumeroCartas();
}

bool Simulador::verificarCartasJogadores() {
    return true;
}
