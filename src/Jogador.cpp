#include "Jogador.h"

Jogador::Jogador() { }

Jogador::Jogador(string nome) {
	this->nome = nome;
	this->deckDePares = nullptr;
	this->proximoJogador = nullptr;
}

Jogador::~Jogador()  {
	this->deckDePares = nullptr;
	this->proximoJogador = nullptr;
}

void Jogador::setarJogador(string n) {
	this->nome = n;
}

void Jogador::setarProximo(Jogador* j) {
	this->proximoJogador = j;
}

Jogador* Jogador::obterJogadorAtual() {
	return this;
}

Jogador* Jogador::obterProximoJogador() {
	return this->proximoJogador;
}

void Jogador::imprimirInformacoesJogador() {
	std::cout << "[ " << this << " ] ( " << this->nome << " , " << this->proximoJogador << " ) " << std::endl;	
}
