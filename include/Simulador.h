#include "Jogador.h"
#include "Carta.h"
#include "ACE.h"

#define MIN_JOGADORES 2
#define MAX_JOGADORES 4

class Simulador {

private:
    int contadorRodadas;
    //Jogador jogadores[];
    ACE* baralho;
    Carta* mico;

public:
    Simulador(/* args */);
    Simulador(int quantidadeJogadores);
    ~Simulador();
    
    void iniciarBaralho();

    void iniciarJogadores();

    void iniciarPartida();

    Carta* retirarMico();
    
    bool verificarCartasJogadores();
};
