#include "Jogador.h"

Jogador::Jogador() { }

Jogador::Jogador(string nome) {
	this->nome = nome;
	this->monte = new ACE;
}

Jogador::~Jogador()  {
	
}

void Jogador::separarPares() {

	for (int i = 0; i < this->mao.size() ; i++) {
		for (int j = i; j < this->mao.size(); j++) {
			if (i == j) {
				continue;
			}
			
			Carta* carta = this->mao[i];
			Carta* outraCarta = this->mao[j];

			if (carta->fazPar(outraCarta)) {
				this->monte->addCarta(
					Carta(carta->obterNaipe(), carta->obterValor())
				);
				this->monte->addCarta(
					Carta(outraCarta->obterNaipe(), outraCarta->obterValor())
				);

				auto removerCarta = this->mao.begin() + i;
				this->mao.erase(removerCarta);

				auto removerOutra = this->mao.begin() + j -1;
				this->mao.erase(removerOutra);
				
				i = 0;
				j = 0;				
			}

		}
	}
}

void Jogador::pegarCartaOponente(Jogador* j, int posicaoCarta) {
	
	while (posicaoCarta > j->mao.size()) {
		cout << "Posicao invalida! Tente novamente = ";
		cin >> posicaoCarta;
	}

	if (j->mao.size() > 0) {
		Carta* c = j->mao[posicaoCarta];
		this->addCartaMao(c);
		auto cartaARemover = j->mao.begin() + posicaoCarta;
		j->mao.erase(cartaARemover);	
	}
}

void Jogador::addCartaMao(Carta* c) {
	this->mao.push_back(c);
}

bool Jogador::temMaoVazia() {
	return this->mao.size() == 0;
}

string Jogador::obterNome() {
	return this->nome;
}

vector<Carta*> Jogador::obterMao() {
	return this->mao;
}

void Jogador::imprimirDetalhes() {
	cout << "====================================== [" << this->obterNome() << "] =========================================" << endl; 
	this->exibirMao();
	this->exibirTopoMonte();
}

void Jogador::exibirNumeroCartasMao() {
	std::cout << "Qtd. de cartas de [" << this->obterNome() << "]: " << this->mao.size() << std::endl;
}

void Jogador::exibirTopoMonte() {
	Carta* cartaUltima = this->monte->pegarCarta();
	Carta* cartaPenultima = this->monte->pegarCarta();

	cout << "As duas cartas do topo do monte sao: " << endl;
	cartaUltima->obterDetalhesCarta();
	cartaPenultima->obterDetalhesCarta();

	this->monte->addCarta(
		Carta(cartaPenultima->obterNaipe(), cartaPenultima->obterValor())
	);

	this->monte->addCarta(
		Carta(cartaUltima->obterNaipe(), cartaUltima->obterValor())
	);

}

void Jogador::exibirMao() {
	int i = 0;
	for (Carta* carta: this->mao) { 
		cout << i << " | ";
		carta->obterDetalhesCarta();
		i++;
	}
}

void Jogador::ordenarMao() {

	Carta* aux;
	int indiceMenorCarta;

    for (int i = 0; i < (this->mao.size() - 1); i++) {
		indiceMenorCarta = i;
		
        for (int j = (i + 1); j < this->mao.size(); j++) {        
			if (this->mao[indiceMenorCarta]->obterValor() > this->mao[j]->obterValor()) {
				indiceMenorCarta = j;
            }
        }

        if (this->mao[i]->obterValor() != this->mao[indiceMenorCarta]->obterValor()) {
            aux = this->mao[i];
            this->mao[i] = this->mao[indiceMenorCarta];
            this->mao[indiceMenorCarta] = aux;
        }

    }

}
