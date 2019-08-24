#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "CardGame.h"
#include "hand.h"
class Blackjack : public CardGame
{
public:
    Blackjack() : dealt(false) { newGame(); }
    void newGame() override;
    void deal() override;
    //void displayHand(Hand &hand) /*  override */;
    void displayHands(); /*  override ;*/
    Hand &compareHands();
    void clearHands() override;
    void hit();
    void stand();

    ~Blackjack(){};

private:
    bool dealt;
    Hand dealersHand;
    Hand playersHand;

    int dealersPlay();
};
#endif // !BLACKJACK_H