/**
 * @file deck.h
 * @author Matthew Hoffman (formatt.hoffman@gmail.com)
 * @brief Class specifying properties of a deck of cards.
 * @version 0.1
 * @date 2019-08-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>
#include "Card.h"

class Deck
{
public:
    Deck();
    void createDeck();
    Card &dealCard();

    void shuffleDeck();
    void displayDeck();

    /**
     * @brief Strings used to print suit values.
     * 
     */
    std::string SuitString[4] = {
        "DIAMONDS",
        "CLUBS",
        "HEARTS",
        "SPADES"};

private:
    std::vector<Card> cards;
};

#endif // !DECK_H