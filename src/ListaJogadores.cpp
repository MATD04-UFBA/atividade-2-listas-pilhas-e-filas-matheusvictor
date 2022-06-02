#include "ListaJogadores.h"

ListaJogadores::ListaJogadores() {
	this->inicioLista = nullptr;
	this->numeroJogadores = 0;	
}

ListaJogadores::~ListaJogadores() {
	
	No* jogadorAtual;

	jogadorAtual = this->inicioLista;

	while (jogadorAtual != nullptr) {
		this->inicioLista = jogadorAtual->obterProximo();
		delete jogadorAtual;
		jogadorAtual = this->inicioLista;
		this->numeroJogadores--;
	}

}

bool ListaJogadores::inserirJogador(Jogador* j) {	
	
	No* novoNo = new No(j);
	No* noAtual = nullptr;
	
	if (novoNo == nullptr) return false;

	novoNo->setarProximo(this->inicioLista);
	
	if(this->inicioLista == nullptr) {	
		this->inicioLista = novoNo;
		this->inicioLista->setarProximo(this->inicioLista);
	} else {		
		
		noAtual = this->inicioLista;

		while (noAtual->obterProximo() != this->inicioLista) {
			noAtual = noAtual->obterProximo();
		}
		
		noAtual->setarProximo(novoNo);
		novoNo->setarProximo(this->inicioLista);
		
	}	

	this->numeroJogadores++;
	return true;
}

bool ListaJogadores::removerJogador(Jogador j) {
	return true;
}

bool ListaJogadores::buscarJogador(Jogador* j, No* &jogadorAtual, No* &jogadorAnterior) {
	return true;		
}

bool ListaJogadores::isListaVazia() {
	return this->inicioLista = nullptr;
}

bool ListaJogadores::isListaCheia() {
	return false;
}

int ListaJogadores::tamanho() {
	return this->numeroJogadores;
}

void ListaJogadores::imprimirLista() {
	
	if (this->inicioLista == nullptr) {
		std::cout << "*********** LISTA VAZIA ***********" << std::endl;
		return;
	}

	No* noAtual = this->inicioLista;

	std::cout << "[ ";

	while (noAtual->obterProximo() != this->inicioLista) {
		noAtual->imprimirNo();
		std::cout << " , ";
		noAtual = noAtual->obterProximo();
	}
	noAtual->imprimirNo();

	std::cout << " ]" << std::endl;
	std::cout << "-------------------------------" << std::endl;

}