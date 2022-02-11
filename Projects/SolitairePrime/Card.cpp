/*
Tonya Shulkey
CECS 282-01
Project Name (Prog 1 - Solitaire Prime)
Due Date (9/14/20)
*/
#include "Card.h"

/*
This is the Card default constructor
*/
Card::Card() {
	rank = ' ';
	suit = ' ';
}

/*
This is the Card constructor
@param char r - rank
@param char s - suit
*/
Card::Card(char r, char s) {
	rank = r;
	suit = s;
}

/*
This is the setCard function that will change an existing card
@param char r - rank
@param char s - suit
*/
void Card::setCard(char r, char s) {
	rank = r;
	suit = s;
}

/*
This is the getValue method that will return an int value depending on the char of the rank
@return int value of the rank
*/
int Card::getValue() {
	int value;
	if (rank == 'A') {
		value = 1;
	}
	else if (rank == 'T') {
		value = 10;
	}
	else if (rank == 'J') {
		value = 10;
	}
	else if (rank == 'Q') {
		value = 10;
	}
	else if (rank == 'K') {
		value = 10;
	}
	else {
		value = rank - '0';		//converts char to int
	}
	return value;
}

/*
This is the showCard function that will display the card using the rank and suit of the card
*/
void Card::showCard() {
	if (rank == 'T') {
		cout << "10" << suit << ", ";
	}
	else {
		cout << rank << suit << ", ";
	}
}