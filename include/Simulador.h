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

     void iniciarBaralho();

    void imprimirBaralho();

    void imprimirTamanhoBaralho();

    void iniciarJogadores();

    void imprimirJogadores();

    void distribuirCartas();

    void iniciarPartida();

    Carta* retirarMico();

    void imprimirMico();

    ListaJogadores* obterJogadores();
    
    void exibirMaoJogador(Jogador* j);

    bool verificarCartasJogadores();
   
};
