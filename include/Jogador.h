#include <string>

#include <Carta.h>

using namespace std;

class Jogador {
    
private:
    string nome;        
    Carta* deckDePares;
    Carta* deckCartasSemPares;

public:
    Jogador();
    ~Jogador();

    void separarPares();
    
    void pegarCartaOponente(int posicaoCarta);

};
