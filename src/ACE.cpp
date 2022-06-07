#include <stack>
#include <time.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "ACE.h"

ACE::ACE() {
    ace = new Carta[TOTAL_CARTAS];

	if (ace == nullptr) {
		this->topo = -1; // alocação mau sucedida
	} 
	
	this->topo = 0;
}

ACE::~ACE() { 
	delete[] ace;
	ace = NULL;
	this->topo = 0;
}

void ACE::inicializarACE () { 
	for (int valor = Carta::Valores::AS; valor <= Carta::Valores::REI; valor++) {
        for (int naipe = Carta::Naipes::OUROS; naipe <= Carta::Naipes::ESPADAS; naipe++){
            Carta carta = Carta(
				static_cast<Carta::Naipes>(naipe),
				static_cast<Carta::Valores>(valor)
			);
			this->addCarta(carta);
        }
    }
}

void ACE::addCarta(Carta c) {

    if (!this->isDeckCheio()) {
		this->ace[this->topo] = c;
		this->topo++;
  	} 
}

Carta* ACE::pegarCarta() {

    if (!this->isDeckVazio()) {
		this->topo--;
        Carta* cartaRetirada = &this->ace[this->topo];
        return cartaRetirada;
    }

    return nullptr;
}

bool ACE::isDeckVazio() {
	return this->topo == 0;
}

bool ACE::isDeckCheio() {
	return this->topo == TOTAL_CARTAS;
}

void ACE::embaralhar() {
	int vezes = TOTAL_CARTAS * 10;
	srand(time(NULL));

	for (int i = 0; i < vezes; i++) {
		int indiceRandomico1;
		int indiceRandomico2;

		do {
			indiceRandomico1 = rand() % TOTAL_CARTAS;
			indiceRandomico2 = rand() % TOTAL_CARTAS;
		} while(indiceRandomico1 == indiceRandomico2);
		
		Carta aux = this->ace[indiceRandomico2];
		this->ace[indiceRandomico2] = this->ace[indiceRandomico1];
		this->ace[indiceRandomico1] = aux;
	}
}

void ACE::imprimir() {
    cout << "===========================================================================================" << endl;
	for (int i = 0 ; i < TOTAL_CARTAS ; i++) {
		std::cout << "Topo: " << i << " | ";
		this->ace[i].obterDetalhesCarta();
	}
	
	std::cout << std::endl << "TOTAL DE CARTAS NO BARALHO: " << this->topo << std::endl;
	cout << "===========================================================================================" << endl;
}

int ACE::tamanho() {
	return this->topo;
}