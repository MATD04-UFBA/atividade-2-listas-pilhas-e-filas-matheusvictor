#include <iostream>

#include "Carta.h"

Carta::Carta() {

}

// ***********************************************
// ******                                   ******
// ***********************************************
Carta::Carta(char naipe, int valor) {
	this->naipe = naipe;
	this->valor = valor;
}

// ***********************************************
// ******                                   ******
// ***********************************************
Carta::~Carta() {}

char Carta::obterNaipe() {
	return this->naipe;
}
