#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "ACE.h"
#include "Simulador.h"

using namespace std;

int main(int argc, char const *argv[]) {

    unsigned int numeroJogadores;  

    if (argc > 1) {
		  numeroJogadores = atoi(argv[1]);
    } else {
        cout << "Informe a quantidade de pessoas que irao jogar = ";
        cin >> numeroJogadores;
    }    

    Simulador* simulador = new Simulador(numeroJogadores);
    simulador->iniciarJogo();
    
    return 0;
}
