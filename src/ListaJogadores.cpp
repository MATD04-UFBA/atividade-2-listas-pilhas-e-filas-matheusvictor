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

bool ListaJogadores::removerJogador(No* no) {
	No* noAtual = this->inicioLista;
	No* noAnterior = this->inicioLista;

	// descobre quem é o ultimo da lista
	while (noAnterior->obterProximo() != this->inicioLista) {
		noAnterior = noAnterior->obterProximo();
	}

	// pecorrer a fila para encontrar o no a ser deletado
	while (noAtual->obterProximo() != this->inicioLista) {
		if (noAtual == no) {
			break;
		}

		noAnterior = noAtual;
		noAtual = noAtual->obterProximo();
	}

	if (noAtual == no) {
		noAnterior->setarProximo(noAtual->obterProximo());
		delete noAtual->obterDado();
		delete noAtual;
		this->numeroJogadores--;
		return true;
	}

	return false;
}

void ListaJogadores::sortearInicioLista() {
	srand(time(NULL));
	int posicaoSorteada = rand() % this->numeroJogadores;
	
	No* no = this->inicioLista;
	for (int i = 0; i < posicaoSorteada; i++) {
		no = no->obterProximo();
	}

	this->inicioLista = no;
}

No* ListaJogadores::obterInicioLista() { 
	return this->inicioLista;
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

	std::cout << "-------------------------------" << std::endl;
		
	if (this->inicioLista == nullptr) {
		std::cout << "*********** LISTA VAZIA ***********" << std::endl;
		return;
	}

	No* noAtual = this->inicioLista;

	while (noAtual->obterProximo() != this->inicioLista) {
		noAtual->imprimirNo();
		noAtual = noAtual->obterProximo();
	}
	noAtual->imprimirNo();

	std::cout << "-------------------------------" << std::endl;

}
