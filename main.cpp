#include <stack>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <iostream>

#include "ACE.h"
#include "Simulador.h"

using namespace std;

int main(int argc, char const *argv[]) {
    
    Simulador* simulador = new Simulador(2);
    simulador->iniciarBaralho();
    Carta* mico = simulador->retirarMico();
    mico->obterDetalhesCarta();

    return 0;
}
