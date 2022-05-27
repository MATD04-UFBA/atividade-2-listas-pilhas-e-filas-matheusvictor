#pragma once

#include<iostream>

#include "Carta.h"

#define TOTAL_CARTAS 52

class ACE {

    private:
		int		topo;
        Carta*  deck;

    public:
        ACE();
        ~ACE();
        
		bool isDeckVazio();

		bool isDeckCheio();

		void addCarta(Carta carta);

		Carta* pegarCarta();

		void imprimir();
        
};
