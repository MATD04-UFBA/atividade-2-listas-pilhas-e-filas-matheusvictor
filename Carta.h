#pragma once

#include <time.h>
#include <stdlib.h>
#include <string>
#include<iostream>

class Carta {

    private:
        char naipe;
        int valor;	

	public:
		Carta();
		Carta(char naipe, int valor);
		~Carta();

		char obterNaipe();

		int obterValor();

		void obterDetalhesCarta();

		bool ehIgual(Carta outraCarta);
        
};
