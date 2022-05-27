#include <iostream>

#include "ACE.h"

ACE::ACE() {
    deck = new Carta[TOTAL_CARTAS];

	if (deck == NULL) {
		this->topo = -1;
	} else {
		this->topo = 0;
	}
}

ACE::~ACE() { 
	delete[] deck;
	deck = NULL;
	this->topo = 0;
}

void ACE::addCarta(Carta c) {

    if (!this->isDeckCheio()) {
		this->deck[++this->topo] = c;
  	} 

}

Carta* ACE::pegarCarta() {

    if (!this->isDeckVazio()){
        Carta* cartaRetirada = &this->deck[this->topo--];
        return cartaRetirada;
    }
    
    return nullptr;
}

bool ACE::isDeckVazio() {
	return this->topo == 0;
}

bool ACE::isDeckCheio() {
	return this->topo == (TOTAL_CARTAS - 1);
}
