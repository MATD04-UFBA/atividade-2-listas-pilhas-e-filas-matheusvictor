#include <iostream>

#include "Carta.h"

Carta::Carta() {

}

Carta::Carta(Carta::Naipes naipe, Carta::Valores valor) {
	this->naipe = naipe;
	this->valor = valor;
}

Carta::~Carta() {}

char Carta::obterNaipe() {
	switch (this->naipe){
		case Carta::Naipes::COPAS: return 'C'; break;
		case Carta::Naipes::PAUS: return 'P'; break;
		case Carta::Naipes::ESPADAS: return 'E'; break;
		default: return 'O'; break;
	};	
}

Carta::Valores Carta::obterValor() {
	return this->valor;
}

void Carta::obterDetalhesCarta(){
	std::cout << "Naipe: " << this->obterNaipe() << " | ";
	std::cout << "Valor: " << this->obterValor() << std::endl;
}