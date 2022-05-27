#include <vector>

#include "ACE.h"

#define QUANTIDADE_CARTAS 13

using namespace std;

int main(int argc, char const *argv[]) {
    
    vector<char> naipes;
    naipes.push_back('a');
    naipes.push_back('b');
    naipes.push_back('c');
    naipes.push_back('d');

    vector<Carta> deck;

    ACE aceDeck;
    
    for (int i = 0; i < naipes.size(); i ++) {
        for(int j = 0; j < QUANTIDADE_CARTAS; j ++) {
            Carta carta(naipes[i], j);
            aceDeck.addCarta(carta);
        }        
    }

    while(!aceDeck.isDeckVazio()) {
        cout << aceDeck.pegarCarta()->obterNaipe() << endl;
    }

    return 0;
}
