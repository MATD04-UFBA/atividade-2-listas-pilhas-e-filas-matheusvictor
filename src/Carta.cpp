#include <iostream>

#include "Carta.h"

Carta::Carta() {

}

Carta::Carta(Carta::Naipes naipe, Carta::Valores valor) {
	this->naipe = naipe;
	this->valor = valor;
}

Carta::~Carta() {}

Carta::Naipes Carta::obterNaipe() {
	return this->naipe;
}

Carta::Valores Carta::obterValor() {
	return this->valor;
}

bool Carta::fazPar(Carta* outraCarta) {
	return this->valor == outraCarta->valor;
}

void Carta::obterDetalhesCarta(){
	char naipe;
	switch (this->naipe){
		case Carta::Naipes::COPAS: naipe = 'C'; break;
		case Carta::Naipes::PAUS: naipe = 'P'; break;
		case Carta::Naipes::ESPADAS: naipe = 'E'; break;
		default: naipe = 'O'; break;
	};	
	std::cout << "Naipe: " << naipe << " | ";
	std::cout << "Valor: " << this->obterValor() << std::endl;
}