#include "Jogador.h"

Jogador::Jogador() { }

Jogador::Jogador(string nome) {
	this->nome = nome;
	this->monte = new ACE;
}

Jogador::~Jogador()  {
	
}

void Jogador::separarPares() {

	cout << "tamanho mao: " << this->mao.size() << endl;

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

string Jogador::obterNome() {
	return this->nome;
}

void Jogador::addCartaMao(Carta* c) {
	this->mao.push_back(c);
}

void Jogador::exibirNumeroCartas() {
	std::cout << "Qtd. de cartas de [" << this->obterNome() << "]: " << this->mao.size() << std::endl;
}

void Jogador::exibirMao() {
	int i = 0;
	for (Carta* carta: this->mao) { 
		cout << i << " ";
		carta->obterDetalhesCarta();
		i++;
	}
}
