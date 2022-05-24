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
7. Simmulação das jogadas (2,0 ponto)
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

