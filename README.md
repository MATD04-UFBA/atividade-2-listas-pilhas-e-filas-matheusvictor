[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=7914973&assignment_repo_type=AssignmentRepo)
# Atividade 2 - Simulando um Jogo de Baralho

## Objetivos da Atividade:

O objetivo principal da atividade é aplicar os conceitos de **Tipos Abstratos de Dados (TAD) Lineares**, ou seja, **Listas Encadeadas**, **Pilhas** e **Filas** [1][2][3] apresentados em sala de aula, no contexto de um problema real e prático.

Os alunos deverão analisar o problema proposto, e definir qual o melhor TAD a ser utilizado na resolução do problema. Mais de um TAD pode ser necessário para que se possa atingir a solução do problema. 

Escolhidos os TADs, sua implementação deverá ser integrada ao problema e uma solução computacional codificada em linguagem C++.

## Motivação:

Jogos eletrônicos costumam demandar por estruturas de dados eficientes e robustas em várias de suas etapas. Mesmo jogos simples podem requerer estruturas de dados apropriadas para que o roteiro do jogo possa ser implementado de forma eficiente. 

Jogos tradicionais ainda são bastante comuns como passatempos. Nessa categoria, os jogos baseados em baralhos de cartas apresentam uma vasta gama de opções [4]. Um dos mais simples e divertido é o Mico [5]. Nesse jogo o objetivo é formar pares de cartas, a partir das cartas na mão do jogador. No inicio do jogo, uma carta é retirada do baralho (o mico). Dessa forma, um par deixará de ser formado. O "perdedor" é aquele jogador que ficar com a carta "par" do "mico". 

O jogo é jogado com 1 baralho de cartas completo. Após ser embaralhado, uma carta é retirada e as demais distribuidas entre os jogadores. Na primeira etapa os jogadores avaliam suas mãos e retiram os pares de cartas iguais, separando-as em um monte a sua frente. Com o restante das cartas que não possuem par, cada jogador na sua vez retira uma carta aleatóriamente da mão de outro jogador (mantendo uma regra de ciclagem, horária ou anti-horária). Caso a nova carta faça um par com alguma carta de sua mão, o jogador coloca o par no monte de cartas a sua frente. Esse passo é realizado até que reste apenas uma carta na mão de apenas um jogador: o mico.  

## O Problema:

Uma empresa de desenvolvimento de jogos quer contratar um novo membro para a sua equipe de desenvolvimento de jogos infantis educativos. Sabendo que os alunos da disciplina de Estrutura de Dados na UFBA são muito bons, decidiu fazer a primeira etapa de sua seleção durante a disciplina propondo um desafio simples mas instigante: desenvolver um simulador de jogo de Mico para crianças, para ser jogado em sua plataforma on-line de jogos educativos. 

Como o desafio é parte do processo seletivo, o interesse é avaliar o conhecimento dos concorrentes para projetar e desenvolver o núcleo jogo, ou seja, os **TADs** que darão suporte às suas regras básicas. Para demonstrar que seus **TADs** funcionam de forma adequada, solicitaram que seja produzido um simulador de uma partida do jogo. 

Nesse simulador as cartas são distribuídas aleatoriamente entre de 2 a 4 jogadores virtuais. O simulador organiza de forma randômica os jogadores e indica um deles para iniciar a partida. Na sequencia todos os jogadores jogam uma vez, e o processo recomeça até que todas as cartas acabem. O controle das rodadas é feito pelo simulador. 

O simulador deve permitir que as jogadas sejam acompanhadas na tela. Deve ser possível ver as cartas de cada jogador, e a carta de cima do monte de cada jogador.  
	
As seguintes regras devem ser seguidas:

1. O baralho, um conjunto de cartas ordenado por naipe e por valor, deve ser gerado no início do jogo. Sua criação deve envolver um processo algoritmico e não uma inicialização por enumeração;
2. Um *Agrupamento de Cartas Embaralhadas (ACE)* deve ser definido no início de cada partida. O *ACE* deve ser gerado pelo sorteio aleatório de cartas do baralho;
3. O **mico** deve ser retirado do *ACE* antes da distribuição para os jogadores por sorteio;
4. Tal como em um jogo real, a ordem das cartas dos *ACE* deve ser mantida na distribuição das cartas aos jogadores; 
5. A distribuição das cartas entre os jogadores deve ser feita a partir da retirada de cartas do *ACE* e de forma alternada, ou seja, primeira retirada para o primeiro jogador, segunda para o segundo, terceira para o primeiro, quarta para o segundo, quinta para o primeiro, e assim sucessivamente, para o caso de apenas 2 jogadores;
6. O processo de retirada de uma carta da mão do outro jogador deve ser feito simulando a escolha da posição da carta pelo jogador da vez;
7. As cartas de cada jogador devem ser armazenadas de tal forma que a busca por um par em uma jogada seja a mais rápida possível;
8. O monte de cartas do jogador permite que apenas o ultimo par inserido fique visível.  

## Os Requisitos de implementação:

Seu simulador deverá ser codificado na linguagem C++, utilizando os conceitos de **classes**, **objetos** e **modularização**. 

Seu repositório deve conter um arquivo **README** com a documentação da solução adotada, que deve conter: 
1. Justificativa para o uso das estruturas de dados escolhidas;
2. Uma breve analise da complexidade dos principais métodos utilizados;
3. Instruções de como utilizar o programa, caso necessário. 
	
A submissão do código do seu projeto será feita exclusivamente pelo repositório individual disponibilizado no *GitHub Classroom*. 

Não serão aceitas submissões no *Google Classroom*, por e-mail ou qualquer outro meio eletrônico de envio. 

## A Avaliação:

Seu simulador será avaliado pelos critérios:
  
1. Uso correto do conceito de TAD/Classes (0,5 ponto)
2. Uso correto do conceito de Modularização (0,5 ponto)
3. Documentação (README) (1,0 ponto)
4. Geração do *ACE* (1,0 ponto)
5. Distribuição das cartas pelos jogadores (1,5 ponto)
6. Formação dos pares no inicio do jogo (2,0 ponto)
7. Simulação das jogadas (2,0 ponto)
8. Simulação completa (1,5 ponto)
9. Penalidades (1,0 ponto por dia de atraso)

A cooperação entre alunos é considerada salutar. No entanto, trabalhos com alto grau de similaridade serão tratados como “plágio”, o que resultará em avaliação 0 (zero) para todos os envolvidos. 

Qualquer dúvida adicional, evite problemas: não presuma nada, procure o professor para esclarecimentos.

## Referencias Bibliográficas:

[1]	Ziviani, Nivio. Projeto de Algoritmos: com Implementações em Pascal e C. Vol. 2. Thomson, 2004.

[2]	Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. Introdução a algoritmos. 2001.

[3]	Sedgewick, Robert. Algorithms in C++. Pearson Education, 2003.

[4]	Wikipedia. Jogos de Cartas. disponível em: https://pt.wikipedia.org/wiki/Jogos_de_cartas

[5]	WikiHow. "Como jogar mico em 12 passos". disponível em: https://pt.wikihow.com/Jogar-Mico

# Sobre a resolução do problema

## **Cartas de um baralho**:

Um baralho de cartas tem um total de 52 cartas (desconsiderando as cartas Coringa); sendo que são classificadas de acordo com seus Naipes e Valores.

Existem 4 Naipes ao todo, sendo eles: Copas, Espadas, Ouros e Paus. Cada um desses Naipes possui também um símbolo para representá-los, conforme imagem abaixo:

![Naipes de um baralho](https://cdn.hinative.com/attached_images/155713/5eaa7949664108461a75350d24d6dd6b1f1e7270/large.png?1503102439)
###### Figura 1. Naipes de cartas de um baralho.

Em cada grupo de Naipe, há 13 cartas, que vão de Às ao Rei, e são esses que representam os Valores de cada carta. Assim, um baralho possui a seguinte composição:

![Cartas de um baralhb](https://pt-static.z-dn.net/files/dac/315a4dd16b9c0c7d20c3a155f41c97d9.png)
###### Figura 2. Cartas de um baralho.

-----
## **Estratégia adotada para solucionar a atividade:**

Dada a breve explicação da composição de um baralho e as regras do jogo Mico [5], podemos entender que um baralho trata-se de um conjunto de cartas e estas, por sua vez, têm as características expostas na seção anterior.

Então, para além de uma classe que representasse uma carta individualmente, foi criada uma outra (`ACE`) que seria composta por uma sequência de `Carta`. Assim, a estrutura implementada na `ACE` objetiva representar um baralho.

A classe `ACE` foi implementada como uma estrutura de Pilha (que será abordada mais a frente). A escolha por essa estrutura deu-se devido à regra de negócio para distribuição de cartas (na qual a carta do topo do baralho precisa ser distribuída rotativamente entre os jogadores, uma a uma).

Enquanto um agrupamento de cartas, a classe `ACE` fica responsável ainda por embaralhar este agrupamento através da randomização de índices que terão seu valores (`Carta`) trocados de posições de  sucessivas vezes.

Já a classe `ListaJogadores` foi implementada como uma estrutura de Lista Simplemente Encadaeada Circular (LSEC), levando em consideração que a rotatividade dos jogadores entre as rodadas. Assim, cada nó desta lista guarda um `Jogador` e a referência para o próximo, onde, neste cenário, o último jogador volta a apontar para o primeiro. Assim, a lista será considerada vazia somente quando não houver um primeiro jogador alocado no início da lista. 

A classe `Simulador` tem a responsabilidade de realizar praticamente todo o fluxo do jogo, através das instâncias das classes `Carta`, `ACE` e `ListaJogadores`, além de realizar validações e controles de fluxo específicos. Por exemplo, considerando que o jogo Mico deve ser jogador por no mínimo 2 pessoas, a `ListaJogadores` não poderá ser instanciada com um número menor que este.

## **Diagrama de Classes:**

De maneira visual, as classes existentes, seus métodos e relacionamentos podem ser vistos no diagrama abaixo.

![Diagrama de Classes](https://i.ibb.co/Jt6wp9j/Diagrama-de-classes.png) 

O diagrama não segue à risca todas as regras UML e foi desenhado para dar uma melhor noção dos atributos das classes a serem desenvolvidas, bem como seus métodos e relacionamentos. Na classe `ACE`, por exemplo, o atributo `deck` é representado como um `Array`; porém a estrutura implementada trata-se de uma Pilha e esta definição no diagrama serviu apenas para passar a noção de que se trata de um conjunto de `Carta`.
###### Figura 3. Diagrama de Classes existentes na solução desenvolida. Fonte: Autor.

## **Definição das estruturas de dados utilizadas:**

Como "determinadas listas lineares apresentam alguma disciplina restrista de organização e acesso de seus nodos", nesta seção será abordada rapidamente os conceitos das estrutuas aqui implementadas. A saber, as principais estruturas utilizadas nesta solução foram **Pilha** e **Lista Simplesmente Encadeada Circular**.

De modo geral, seguindo a definição de Edelweiss e Galante (2009):

>"As duas principais restrições apresentadas para listas são:
> - LIFO (*Last In First Out*) – dentre os nodos da lista, o primeiro nodo a ser retirado deve ser o último nodo que foi inserido;
> - FIFO (*First In First Out*) – primeiro nodo a ser retirado deve ser o primeiro que foi inserido."

Assim, "as listas que respeitam a restrição LIFO são denominadas Pilhas" (Edelweiss e Galante, 2009, p. 126). Esse comportamento pode ser visualizado ao imaginarmos uma pilha de pratos, por exemplo, onde um novo prato é sempre colocado no topo da pilha e, quando necessário, o primeiro prato a ser retirado deve ser o do topo da pilha.

![Pilha](https://thumbs.gfycat.com/LikelyAbandonedAracari-size_restricted.gif)
###### Figura 4. Representação do comportamento de empilhar.

Neste caso, como a distribuição das cartas entre os jogadores, por exemplo, é feita retirando o topo e a transferindo para um jogador, nota-se um comportamente semelhante ao de uma Pilha. 

No caso da LSEC 

"Quando uma lista linear encadeada apresenta um elo ligando o último nodo ao primeiro, ela se torna uma lista circular"

"Neste caso, qualquer
nodo pode ser utilizado para fazer acesso à lista, pois toda ela pode ser per corrida a partir de qualquer nodo"

Dado ainda que o jogador que irá iniciar o jogo será definido através de sorteio, este é um comportamento.

Porém, ainda que sejam circulares, "estas listas também apresentam um ponteiro para fazer referência à lista" onde o primeiro nó acessado  é identificado como o primeiro da lista.

-----
## **Compilar & executar:**

Com o compilador da sua preferência, será necessário compilar os seguintes arquivos `.cpp`: `Carta`, `ACE`, `Jogador`, `No`, `ListaJogadores`, `Simulador` e `main`, que estão localizados no diretório `src`.

Usando o `g++`, por exemplo, você pode executar o seguinte comando para compilar esses arquivos:

> g++ src\Carta.cpp src\ACE.cpp src\Jogador.cpp src\No.cpp src\ListaJogadores.cpp src\Simulador.cpp main.cpp -I 
include -o build\\*main*.exe

Você pode nomear o executável do programa de outra forma, se preferir. Neste caso, basta substituir o *main.exe* para *NomeDoExecutavel*.exe onde *NomeDoExecutavel* representará o nome do programa quando executado através do comando que será mostrado a seguir. Porém, **é importante que o executável seja compilado com a extensão `.exe`.**

Após a compilação, digite o seguinte comando para que o programa seja executado:

> .\build\\*main*.exe

Lembrando que caso tenha dado outro nome ao executável ao invés de `main.exe`, deverá executar com o nome que foi dado.

Caso você queira executar o jogo já informando o número de jogadores que irão jogar, basta que execute o comando a seguir:

> .\build\main.exe `N`

Onde `N`, neste caso, representa o número de jogadores. Para que o jogo seja jogado por 2 pessoas, por exemplo, você deve executar:

> .\build\main.exe `2`

Caso você não passe nenhum argumento, o jogo será iniciado com o número mínimo de jogadores, neste caso, 2.

```
Obs.: Pode haver diferenças dos comandos executados a depender do compilador e sistema operacional utilizados. Nesta documentação foram listados os comandos executados usando o Visual Studio Code no Windows 10.
```

-----
## **Materiais consultados para desenvolver a solução:**

- Estruturas de dados [recurso eletrônico] / Nina Edelweiss,
Renata Galante. – Dados eletrônicos. – Porto Alegre: Bookman, 2009.
- [Jogos de Cartas: Mico](http://jogosdecartas.hut.com.br/mico/)
- [stack-data-structure](https://www.geeksforgeeks.org/stack-data-structure-introduction-program/)
- [How to cast int to enum in C++?](https://stackoverflow.com/questions/11452920/how-to-cast-int-to-enum-in-c)
- [C++ | Shuffling a Deck of Cards](https://www.youtube.com/watch?v=Bsyvs82XliM)
- [Declarações de enumeração C](https://docs.microsoft.com/pt-br/cpp/c-language/c-enumeration-declarations?view=msvc-170)
- [C++ - using enums to generate a deck of cards](https://stackoverflow.com/questions/35937285/c-using-enums-to-generate-a-deck-of-cards)
- [How to concatenate a std::string and an int](https://stackoverflow.com/questions/191757/how-to-concatenate-a-stdstring-and-an-int)
- [How do I print out the contents of a vector?](https://stackoverflow.com/questions/10750057/how-do-i-print-out-the-contents-of-a-vector)
- [Estrutura de Dados e Algoritmos: Filas - Queue](https://www.cos.ufrj.br/~rfarias/cos121/filas.html)