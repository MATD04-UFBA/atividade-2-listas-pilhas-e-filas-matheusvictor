#include <iostream>
#include <cctype>

#include "ListaJogadores.h"
#include "Carta.h"
#include "ACE.h"

#define MIN_JOGADORES 2
#define MAX_JOGADORES 4

using namespace std;

class Simulador {

public:
    Simulador(int quantidadeJogadores);
    ~Simulador();

    void iniciarJogo();

private:
    int contadorRodadas;
    int quantidadeJogadores;
    ACE* baralho;
    Carta* mico;
    ListaJogadores* jogadores;

    void iniciarJogadores();
    
    void distribuirCartas();

    void ordernarMaoJogadores();
    
    void exibirMaoJogador(Jogador* j);

    bool verificarCartasJogadores();

    void iniciarSeparacaoParesCartas();

    void iniciarRodada(Jogador* j);
   
};
