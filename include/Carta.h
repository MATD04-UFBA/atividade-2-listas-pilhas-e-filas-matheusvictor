#pragma once

#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>

class Carta {

public:
	enum Naipes {
		OUROS,
		COPAS,
		PAUS,
		ESPADAS
	};
    enum Valores {
		AS = 1,
		DOIS,
		TRES,
		QUADTRO,
		CINCO,
		SEIS,
		SETE,
		OITO,
		NOVO,
		DEZ,
		VALETE,
		RAINHA,
		REI
	};	

	Carta();
	Carta(Carta::Naipes naipe, Carta::Valores valor);
	~Carta();

	Carta::Naipes obterNaipe();

	Carta::Valores obterValor();

	void obterDetalhesCarta();

	bool fazPar(Carta* outraCarta);

private:
	Naipes naipe;
	Valores valor;
	
};
