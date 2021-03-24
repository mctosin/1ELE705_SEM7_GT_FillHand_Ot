#pragma once
#ifndef DECK_H
#define DECK_H

// card structure definition                  
typedef struct {
    const char* face; // define pointer face   
    const char* suit; // define pointer suit
    unsigned int face_number; // Define o número da face da carta
    unsigned int suit_number; // Define o número do naipe
} Card; // end struct card    

unsigned int fillHandExt(Card* const wDeck, Card* const wHand, const unsigned int Ncards);

#endif // DECK_H
