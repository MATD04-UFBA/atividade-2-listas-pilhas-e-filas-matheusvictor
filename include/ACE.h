#pragma once

#include<iostream>

#include "Carta.h"

using namespace std;
#define TOTAL_CARTAS 52

class ACE {

private:
	int topo;
	Carta* ace;

public:
	ACE();
	~ACE();
	
	bool isDeckVazio();

	bool isDeckCheio();

	void inicializarACE();
	
	void addCarta(Carta carta);

	Carta* pegarCarta();

	void embaralhar();

	void imprimir();
        
};
