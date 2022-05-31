#include <vector>
#include <string>

#include <Carta.h>

using namespace std;

class Jogador {
    
private:
    string nome;        
    Carta* deckDePares;
    vector<Carta*> deckCartasSemPares;
    Jogador* proximoJogador;

public:
    Jogador();
    Jogador(string nome);
    ~Jogador();

    void separarPares();
    void pegarCartaOponente(int posicaoCarta);

    void setarJogador(string n);
    void setarProximo(Jogador* j);       

    Jogador* obterJogadorAtual();
  	Jogador* obterProximoJogador();

    void imprimirInformacoesJogador();

};
