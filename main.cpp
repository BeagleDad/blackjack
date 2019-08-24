/**
 * This is a simple blackjack game  
 */
#include <iostream>

#include "menu.h"
#include "deck.h"
#include "CardGame.h"
#include "Blackjack.h"

/*
*  Using member function as function pointer (hack)
*  Because a member function is meaningless without an object to invoke it on,
*  you can’t do this directly.
*  As a patch for existing software, use a top-level (non-member) function as a
*  wrapper which takes an object obtained through some other technique.
*/
Blackjack bj;

void bj_deal_wrapper()
{
    bj.deal();
    bj.displayHands();
}

void bj_newgame_wrapper()
{
    bj.newGame();
}

void bj_hit_wrapper()
{
    bj.hit();
    bj.displayHands();
}
void bj_stand_wrapper()
{
    bj.stand();
}

const std::string title("Blackjack");
void newGame() { std::cout << "New Game\n"; }
int main()
{
    Menu menu(title);

    menu.addMenuItem("Deal", bj_deal_wrapper);
    menu.addMenuItem("Hit me", bj_hit_wrapper);
    menu.addMenuItem("Stand", bj_stand_wrapper);
    menu.addMenuItem("New Game", bj_newgame_wrapper);

    while (1)
    {
        menu.displayMenu();
    }
    return 0;
}