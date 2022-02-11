/*
Tonya Shulkey
CECS 282-01
Project Name (Prog 1 - Solitaire Prime)
Due Date (9/14/20)
*/

#include "Deck.h"

/*
This is the Deck constructor that will create a deck in order from Ace of Spades to King of Clubs
*/
Deck::Deck() {
	refreshDeck();
}

/*
This is the refreshDeck function that will reset the deck to be in order from Ace of spades to king of clubs
*/
void Deck::refreshDeck() {
	top = 0;	//refresh the top
	int index = 0;
	for (int i = 1; i < 5; i++) {			//there are 4 suits  ♠, ♣, ♥, ♦
		char s;
		if (i == 1) {
			s = 'S';
		}
		else if (i == 2) {
			s = 'H';
		}
		else if (i == 3) {
			s = 'D';
		}
		else {
			s = 'C';
		}
		for (int j = 1; j < 14; j++) {		//there are 13 values
			char r;
			if (j == 1) {
				r = 'A';
			}
			else if (j == 10) {
				r = 'T';
			}
			else if (j == 11) {
				r = 'J';
			}
			else if (j == 12) {
				r = 'Q';
			}
			else if (j == 13) {
				r = 'K';
			}
			else {
				r = '0' + j;	//convert int to char
			}
			deck[index].setCard(r, s);	//s is the suit and j and r is the rank
			index++;
		}
	}
}

/*
This is the deal function that will show the top card of the deck
@return Card newCard which is the top card on the deck
*/
Card Deck::deal() {
	Card newCard = deck[top];
	top++;			//Each time this function is called the top is taken so top index is added for the next time.
	return newCard;
}

/*
This is the shuffle function that will shuffle the cards in a random order
*/
void Deck::shuffle() {
	for (int i = 0; i < 52; i++) {
		int num = rand() % 52;	//get random num from 52 cards from 0 - 51
		Card temp = deck[i];	//temp place holder for the card that will change
		deck[i] = deck[num];	//change card to new card
		deck[num] = temp;		//change other card to the temp so it is not lost
	}
}

/*
This is the cardsLeft function that will return an integer of how many cards there are
@return int cards that are left in the deck
*/
int Deck::cardsLeft() {
	return 52 - top;		//each index of deck is the size of 2 because Card has rank and value. [[r,s], [r,s], [r,s]] therefore the sizeofdeck is 52 * 2 and so we divide 52 / 2 to get the actual size - the amount of cards played. I just used top as a counter though
}

/*
This is the showDeck function that will display the cards in the deck in 13 columns and 4 rows
*/
void Deck::showDeck() {
	int index = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			deck[index].showCard();
			index++;
		}
		cout << "\n" << endl;
	}
}
