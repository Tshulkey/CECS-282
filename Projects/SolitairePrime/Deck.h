/*
Tonya Shulkey
CECS 282-01
Project Name (Prog 1 - Solitaire Prime)
Due Date (9/14/20)
*/

//guard
#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

/*
This is the deck class it will hold 52 cards and have a number to track the top of the deck
It will be able to reset to an ordered deck, it will be able to shuffle randomly, it will return the number of cards left
It will be able to display the deck neatly
*/
class Deck {
private:
	Card deck[52];		//deck full of 52 Cards
	int top = 0;
public:
	Deck();		//constructor which creates a deck of 52 cards. A of S followed by H, D, C
	void refreshDeck();		//reset the deck so it looks like a new deck
	Card deal();	// deal a card from the top of the deck
	void shuffle();		//shuffle the cards in the deck
	int cardsLeft();	//return the number of cards left in the deck
	void showDeck();	//show all the cards in the deck: 13 columns and 4 rows.

};	
#endif