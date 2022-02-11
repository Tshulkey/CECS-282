/*
This program creates an array deck with 52 ints which will be the index of the cards
It will shuffle the deck and display the first 4 cards.
@author Tonya Shulkey & Sydney Kao
@version Fall 2020
@date 8/31/2020
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	const int NUMBER_OF_CARDS = 52;
	int deck[NUMBER_OF_CARDS];
	string suits[] = { "Spades", "Hearts", "Diamonds", "Clubs" };
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	//Initialize cards
	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
		deck[i] = i;
	}

	//shuffle the cards
	srand(time(0));
	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
		int num = rand() % NUMBER_OF_CARDS;
		int temp = deck[i];

		deck[i] = deck[num];
		deck[num] = temp;
	}

	//Generate random index
	cout << "Random generated index: " << rand() % NUMBER_OF_CARDS << "\n" << endl;

	//display the first four cards
	for (int i = 0; i < 4; i++) {
		cout << ranks[deck[i] % 13] << " of " << suits[deck[i] / 13] << "\n" << endl;

		//string s = suits[(i/13)]; gives you the suit at a given index
		//string r = ranks[i % 13]; gives you the rank at a given index
	}
	return 0;
}