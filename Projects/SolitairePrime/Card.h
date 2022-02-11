/*
Tonya Shulkey
CECS 282-01
Project Name (Prog 1 - Solitaire Prime)
Due Date (9/14/20)
*/

//guard
#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;

/*
This is the Card class. Each card will have a rank and a suit. It will be able to set an existing card to a rank and suit
It will be able to get the value of the card based on its rank
It will display the card
*/
class Card {
private:
	char rank;	//'A', '2', ... '9', 'T', 'J'
	char suit;	//'H', 'C', 'S', 'D'
public:
	Card();	//creates a "blank" Card
	Card(char r, char s); //constructor to create a card, setting the rank and suit
	void setCard(char r, char s);	//set an existing blank card to a particular value
	int getValue();		//return the point value of the card. Ace = 1, 2-10, Jack = 10, Queen = 10, King = 10.
	void showCard();	//display the card using 2 field. Ace of Spade: AS, Ten of Diamond: 10D, Queen of Heart: QH, Three of Club: 3C. suit:  ♠, ♣, ♥, ♦
};
#endif