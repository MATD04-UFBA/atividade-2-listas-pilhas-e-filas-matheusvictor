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
		REI,
		AS
	};	

	Carta();
	Carta(Carta::Naipes naipe, Carta::Valores valor);
	~Carta();

	char obterNaipe();

	Carta::Valores obterValor();

	void obterDetalhesCarta();

	bool ehIgual(Carta outraCarta);

private:
	Naipes naipe;
	Valores valor;
	
};
