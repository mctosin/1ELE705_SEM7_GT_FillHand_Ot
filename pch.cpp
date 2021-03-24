//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include <stddef.h>

unsigned int fillHandExt(Card* const wDeck, Card* const wHand, const unsigned int Ncards) {



    return -1;
}

/*  Descri��o do Assignment  */
/*
    No assignment anterior, voc� construiu a fun��o fillHandExt, cuja c�pia das especifica��es 
segue abaixo em destaque ao final deste texto.
    Neste novo assignment voc� ir� otimizar a implementa��o da fun��o fillHandExt. Na especifica��o
anterior, para cada carta transferida do deck para a hand, o deck de cartas deveria ser atualizado.
Assim, para cada carta transferida o deck inteiro deveria ser deslocado. Caso tiv�ssemos N cartas 
efetivamente transferidas (N <= Ncards), ter�amos N procedimentos de deslocamento no deck.
    Isso pode ser otimizado se fizermos primeiro todas as transfer�ncias do deck para a hand e,
somente depois, fizermos um �nico procedimento de deslocamento das cartas que devem restar no deck
(ou que n�o foram transferidas).

*/ 


/*  C�pia da Descri��o do Assignment Anterior */
/*
    Neste assignment voc� deve entender a parte do c�digo necess�ria para realizar a tarefa e deve
codificar a fun��o fillHandExt segundo as especifica��es abaixo
    O tipo Card define a struct Card, que por sua vez define as informa��es em cada carta. Agora,
al�m dos ponteiros para as strings da face e do naipe da carta, tamb�m s�o armazenados os valores
das faces e naipes. O valor da face vai de 1 a 13, de �s da Rei, respectivamente. O valor do naipe
vai de 1 a 4, sendo estes atribu�dos a Copas, Ouro, Paus e Espadas, respectivamente. O tipo Card �
definido no arquivo deck.h
    O vetor que comp�e um deck de cartas ou uma hand de cartas agora possui uma carta terminadora,
sendo assim poss�vel identificar a carta final armazenada em um destes vetores. A carta terminadora
� composta por valores nulos (NULL) nos ponteiros de string para a face e para o naipe e por valores
zero os valores da face e do naipe.
    A fun��o fillHandExt recebe como par�metros o endere�o de um deck de cartas, o endere�o de uma
hand de cartas e a quantidade de cartas que ser� transferida do deck de cartas para a hand de cartas.
A fun��o deve transferir Ncards do deck de cartas para o hand de cartas. A fun��o retorna a
quantidade de cartas que efetivamente foi transferida, ou seja, se houver menos cartas no deck que a 
quantidade Ncards solicitada, a quantidade de cartas ser� aquela at� esvaziar o deck.
    A fun��o fillHandExt considera que o hand de cartas n�o foi inicializado, ou seja, a fun��o ir�
preecher a hand a partir do in�cio deste vetor, ignorando se a hand j� possui cartas ou n�o. Ao final
da transfer�ncia a carta terminadora � inserida, indicando o final da hand.
    A fun��o fillHand deve operar da seguinte forma. A cada carta copiada do topo do deck para a hand, 
o vetor do deck deve ser atualizado, pois a carta do topo j� n�o mais no deck. Para isto, o conte�do 
do deck deve ser deslocado de modo que vetordeck[0] = vetordeck[1], vetordeck[1] = vetordeck[2], 
vetordeck[i] = vetordeck[i+1], at� que se desloque a carta terminadora.
    Adicionalmente a fun��o fillHandDeck pode ser utilizada para inicializar uma dada hand vazia. 
Se a quantidade de cartas passada passada para a fun��o for zero, ent�o ela somente insere o terminador
na hand cujo endere�o foi passado para wHand. O deck neste caso permanece inalterado, obviamente.
    Todas as informa��es necess�rias para codificar a fun��o fillHandExt est�o dispon�veis pelas suas 
vari�veis de passagem de par�metros. Assim, � proibido utilizar qualquer constante, vari�vel ou elemento 
externo � fun��o.
    N�o modifique o c�digo do programa, somente fa�a modifica��es no corpo da fun��o fillHandExt.

*/