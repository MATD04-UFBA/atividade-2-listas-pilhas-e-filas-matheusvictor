#include <time.h>
#include<iostream>

#include "No.h"

class ListaJogadores {

private:
    No* inicioLista;         // indica a primeira posicao da fila 
    int numeroJogadores;   	// Total de posicoes alocadas
    
public:
    ListaJogadores();
    ~ListaJogadores();

    bool isListaVazia();
    bool isListaCheia();

    bool inserirJogador(Jogador* j);
    bool removerJogador(No* no);

    void sortearInicioLista();
    No* obterInicioLista();
    
    int tamanho();
    void imprimirLista();

};
