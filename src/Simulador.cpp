#include "Simulador.h"
#include "Carta.h"

Simulador::Simulador() { }

Simulador::Simulador(int qtdJogadores) { 
    baralho = new ACE;
}

Simulador::~Simulador() { }

void Simulador::iniciarBaralho() {
    this->baralho->inicializarACE();
    this->baralho->embaralhar();
}

void Simulador::iniciarJogadores() { }

void Simulador::iniciarPartida() { 
    while (verificarCartasJogadores()) {

    }
}

Carta* Simulador::retirarMico() {
    return this->baralho->pegarCarta();
}

bool Simulador::verificarCartasJogadores() {
    return true;
}
