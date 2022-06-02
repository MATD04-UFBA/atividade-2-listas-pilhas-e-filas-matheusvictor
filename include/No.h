#pragma once

#include<iostream>

#include "Jogador.h"

class No {

private: 
  Jogador* dado;
  No* proximo;

public:
  No();
  No(Jogador* j);
  ~No();
  
  Jogador* obterDado();
  void setarDado(Jogador* jogador);

  No* obterProximo();
  void setarProximo(No* prox);

  void imprimirNo();
  void imprimirDado();

};
