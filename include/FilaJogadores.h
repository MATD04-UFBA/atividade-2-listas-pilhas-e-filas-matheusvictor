#include "Jogador.h"

class FilaJogadores {

private:
    Jogador* inicioFila;    // indica a primeira posicao da fila 
	Jogador* fimFila;    	// indica a ultima posicao da fila 
    int numeroJogadores;   	// Total de posicoes alocadas
    
public:
    FilaJogadores();
    ~FilaJogadores();

    bool isFilaVazia();
    bool isFilaCheia();

    bool enfileirar(Jogador* j);
    bool desenfileirar();	
    
    int tamanho();  

};
