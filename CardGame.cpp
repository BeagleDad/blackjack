#include "CardGame.h"

void CardGame::displayDeck()
{
    for (auto card : cards)
    {
        std::cout << card << std::endl;
    }
}