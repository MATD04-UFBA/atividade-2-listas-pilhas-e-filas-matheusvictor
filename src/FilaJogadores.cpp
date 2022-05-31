#include "Jogador.h"
#include "FilaJogadores.h"

FilaJogadores::FilaJogadores() {
	this->inicioFila == nullptr;
	this->fimFila == nullptr;
	this->numeroJogadores = 0;	
}

FilaJogadores::~FilaJogadores() {
	
	Jogador* jogadorAtual;

	jogadorAtual = this->inicioFila;

	while(jogadorAtual != nullptr) {
		this->inicioFila = jogadorAtual->obterProximoJogador();
		delete jogadorAtual;
		jogadorAtual = this->inicioFila;
		this->numeroJogadores--;
	}

}

bool FilaJogadores::enfileirar(Jogador* j) {

	Jogador* novoJogador = nullptr;
	Jogador* jogadorAtual = nullptr;
	Jogador* jogadorAnterior = nullptr;

	novoJogador = new Jogador;

	if (novoJogador == nullptr) return false; // alocação sem sucesso

	novoJogador->setarJogador("nome");
	// novoJogador->setarProximo(nullptr);
	novoJogador->setarProximo(novoJogador->obterProximoJogador());
	
	if (this->inicioFila == nullptr) {
		this->inicioFila = novoJogador;
	} else {
		jogadorAtual = this->inicioFila;

		while (jogadorAtual->obterProximoJogador() != nullptr) {
			jogadorAtual = jogadorAtual->obterProximoJogador();
		}

		jogadorAtual->setarProximo(novoJogador);
	}

	this->fimFila = novoJogador;
	numeroJogadores++;

	return true;
}

bool FilaJogadores::desenfileirar() {

	if (this->numeroJogadores == 0) {
		return false;
	}

	Jogador* aux = this->inicioFila;

}

bool FilaJogadores::isFilaVazia() {
	return this->fimFila = nullptr;
}

bool FilaJogadores::isFilaCheia() {
	return this->inicioFila == this->fimFila;
}

int FilaJogadores::tamanho() {
	return this->numeroJogadores;
}