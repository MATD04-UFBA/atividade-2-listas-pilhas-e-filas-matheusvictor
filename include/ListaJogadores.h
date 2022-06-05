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
    bool removerJogador(Jogador j);
    bool buscarJogador(Jogador* j, No* &jogadorAtual, No* &jogadorAnterior);

    int tamanho();
    void imprimirLista();

};