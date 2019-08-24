#ifndef CARDGAME_H
#define CARDGAME_H

#include <vector>
#include "Card.h"
#include "deck.h"

class CardGame
{
public:
    virtual void newGame() = 0;
    //virtual void displayHand(std::vector<Card> &hand) = 0;
    virtual void deal() = 0;
    virtual void clearHands() = 0;
    virtual ~CardGame(){};

protected:
    Deck gameDeck;
};

#endif // !CARDGAME_H
