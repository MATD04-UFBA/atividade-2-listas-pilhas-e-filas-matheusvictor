#include <vector>
#include <string>

#include <ACE.h>
#include <Carta.h>

using namespace std;

class Jogador {
    
private:
  string nome;        
  ACE* monte;
  vector<Carta*> mao;

public:
  Jogador();
  Jogador(string nome);
  ~Jogador();

  void separarPares();
  void pegarCartaOponente(int posicaoCarta);
  void addCartaMao(Carta* c);

  string obterNome();
  void imprimirDetalhes();
  void exibirNumeroCartasMao();
  void exibirTopoMonte();
  void exibirMao();

  void ordenarMao();

};
