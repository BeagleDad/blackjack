/**
 * This is a simple blackjack game  
 */
#include <iostream>

#include "menu.h"
#include "deck.h"
#include "CardGame.h"
#include "Blackjack.h"
// Create ourDeck of cards
//DeckOfCards ourDeck;

const std::string title("Blackjack");

int main()
{

    CardGame *game = new Blackjack();

    Menu menu(title);

    menu.addMenuItem("New Game", game->clearHands);
    // menuI mm1);
    // MenuItem mm2 = {"Deal", deal};
    // menuItems.emplace(2, mm2);
    // MenuItem mm3 = {"Hit", hit};
    // menuItems.emplace(3, mm3);
    // MenuItem mm4 = {"Display Deck", displayDeck};
    // menuItems.emplace(4, mm4);

    menu.displayMenu();
    return 0;
}