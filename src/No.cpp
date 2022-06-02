#include <stdio.h>
#include <stdlib.h>

#include "No.h"

No::No() {}

No::No(Jogador* j) {	
	this->dado = j;
    this->proximo = nullptr;
}

No::~No() {
	this->proximo = nullptr;
}

Jogador* No::obterDado() {
	return this->dado;
}

void No::setarDado(Jogador* jogador) {
	this->dado = jogador;
}

No* No::obterProximo() {
	return this->proximo;
}

void No::setarProximo(No* prox) {
	this->proximo = prox;
}

void No::imprimirNo() {
	std::cout << " - " << this->dado->obterNome() << std::endl;
}

void No::imprimirDado() {
	std::cout << this->dado;
}
