#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>

const std::string cardFaces[14] = {
    "Joker", "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
/**
 * @brief Class that defines the properties of a card
 * 
 */
class Card
{
public:
    /**
     * @brief defines the suits in a deck
     * 
     */
    enum Suit
    {
        DIAMONDS,
        CLUBS,
        HEARTS,
        SPADES,
        SUIT_COUNT
    };

    /**
     * @brief Strings used to print suit values.
     * 
     */
    // std::string SuitString[4] = {
    //     "DIAMONDS",
    //     "CLUBS",
    //     "HEARTS",
    //     "SPADES"};

    // const std::string cardFaces[13] = {
    //     "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    /**
     * @brief Construct a new Card object
     * 
     * @param value 
     * @param suit 
     */
    Card(int value, std::string suit)
        : rank(value), suit_(suit) {}

    friend std::ostream &operator<<(std::ostream &os, Card const &tc)
    {
        return os << tc.rank << " - " << cardFaces[tc.rank] << " of " << tc.suit_;
    }

public:
    /**
     * @brief the cards value
     * 
     */
    int rank;
    std::string suit_;
};

#endif // !CARD_H
