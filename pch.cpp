//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include <stddef.h>

unsigned int fillHandExt(Card* const wDeck, Card* const wHand, const unsigned int Ncards) {



    return -1;
}

/*  Descrição do Assignment  */
/*
    Neste assignment você deve entender a parte do código necessária para realizar a tarefa e deve
codificar a função fillHandExt segundo as especificações abaixo
    O tipo Card define a struct Card, que por sua vez define as informações em cada carta. Agora,
além dos ponteiros para as strings da face e do naipe da carta, também são armazenados os valores
das faces e naipes. O valor da face vai de 1 a 13, de Às da Rei, respectivamente. O valor do naipe
vai de 1 a 4, sendo estes atribuídos a Copas, Ouro, Paus e Espadas, respectivamente. O tipo Card é
definido no arquivo deck.h
    O vetor que compõe um deck de cartas ou uma hand de cartas agora possui uma carta terminadora,
sendo assim possível identificar a carta final armazenada em um destes vetores. A carta terminadora
é composta por valores nulos (NULL) nos ponteiros de string para a face e para o naipe e por valores
zero os valores da face e do naipe.
    A função fillHandExt recebe como parâmetros o endereço de um deck de cartas, o endereço de uma
hand de cartas e a quantidade de cartas que será transferida do deck de cartas para a hand de cartas.
A função deve transferir Ncards do deck de cartas para o hand de cartas. A função retorna a
quantidade de cartas que efetivamente foi transferida, ou seja, se houver menos cartas no deck que a 
quantidade Ncards solicitada, a quantidade de cartas será aquela até esvaziar o deck.
    A função fillHandExt considera que o hand de cartas não foi inicializado, ou seja, a função irá
preecher a hand a partir do início deste vetor, ignorando se a hand já possui cartas ou não. Ao final
da transferência a carta terminadora é inserida, indicando o final da hand.
    A função fillHand deve operar da seguinte forma. A cada carta copiada do topo do deck para a hand, 
o vetor do deck deve ser atualizado, pois a carta do topo já não mais no deck. Para isto, o conteúdo 
do deck deve ser deslocado de modo que vetordeck[0] = vetordeck[1], vetordeck[1] = vetordeck[2], 
vetordeck[i] = vetordeck[i+1], até que se desloque a carta terminadora.
    Adicionalmente a função fillHandDeck pode ser utilizada para inicializar uma dada hand vazia. 
Se a quantidade de cartas passada passada para a função for zero, então ela somente insere o terminador
na hand cujo endereço foi passado para wHand. O deck neste caso permanece inalterado, obviamente.
    Todas as informações necessárias para codificar a função fillHandExt estão disponíveis pelas suas 
variáveis de passagem de parâmetros. Assim, é proibido utilizar qualquer constante, variável ou elemento 
externo à função.
    Não modifique o código do programa, somente faça modificações no corpo da função fillHandExt.

*/