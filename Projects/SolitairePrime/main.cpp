/*
Tonya Shulkey
CECS 282-01
Project Name (Prog 1 - Solitaire Prime)
Due Date (9/14/20)
*/

#include "Card.h"
#include "Deck.h"

#include <iostream>
#include <ctime>		//for time()

using namespace std;

bool isPrime(int sum);	//Header for the isPrime function below

int main() {
	srand(time(0));
	int option = 0;		//user's option from the choices on the menu
	Deck playerDeck;	//player deck uses default constructor

	while (option != 5) {	//continues to ask until option 5 is selected which will terminate the program
		cout << "Welcome to Solitaire Prime!" << endl;		// menu
		cout << "1) New Deck" << endl;
		cout << "2) Display Deck" << endl;
		cout << "3) Shuffle Deck" << endl;
		cout << "4) Play Solitaire Prime" << endl;
		cout << "5) Exit" << endl;
		cin >> option;		//user's input

		if (option == 1) {
			//create an unshuffled deck in s, h, d, c, a, 2, 3 order
			cout << "\nCreating Deck\n" << endl;
			playerDeck.refreshDeck();
		}
		else if (option == 2) {
			//will display all cards in a grid: 13 by 4
			if (playerDeck.cardsLeft() == 0) {		//must have cards in the deck
				cout << "\nPlease Create a new deck first\n" << endl;
				continue;
			}
			cout << "\n";
			playerDeck.showDeck();
		}
		else if (option == 3) {
			//will randomly shuffle all cards in the deck
			if (playerDeck.cardsLeft() == 0) {	// must have cards in the deck
				cout << "\nPlease create a new deck first\n" << endl;
				continue;
			}
			cout << "\nShuffling deck\n" << endl;
			playerDeck.shuffle();
		}
		else if (option == 4) {
			//will play the game as described
			if (playerDeck.cardsLeft() == 0) {	//must have cards in the deck
				cout << "\nPlease create a new deck first\n" << endl;
				continue;
			}
			int sum = 0;		//keeps track of the sum
			int piles = 0;		//keeps track of prime piles
			bool result = true;	//keeps track of the winning outcome
			cout << "\nPlaying Solitaire Prime\n" << endl;
			while (playerDeck.cardsLeft() > 0) {
				//while there is cards in the deck continue the game
				for (int i = 0; i < 52; i++) {
					Card c = playerDeck.deal();
						//get the card on top
					c.showCard();
						//display the card
					sum += c.getValue();
						//get the value of the card on top
					if (isPrime(sum)) {
						cout << "Prime: " << sum << endl;
							//It's Prime!
						sum = 0;
							//reset the sum for next round
						piles += 1;
							//sum is prime start a new pile
						result = true;		//keeps track of the result if this is the last card it will end in true otherwise the next line will change it back to false
					}
					else {		//its not prime
						result = false;		//keeps track of result
					}
				}
			}
			if (result == true) {
				cout << "\nWinner in " << piles << " piles!\n" << endl;		//This prints if the player won
			}
			else {
				cout << "\nLoser\n" << endl;		//This prints if the player lost
			}
		}
		else if (option == 5) {		//Quit
			cout << "Thank you for playing! Goodbye!" << endl;
		}
		else {		//user inputted a value not given in the choices
			cout << "\nInvalid option. Please try again.\n" << endl;
			continue;
		}
	}
	return 0;
}

/*
This is the isPrime function that will take the sum of the pile and check if it is prime by seeing it is divisible by anything.
@param int sum - is the total sum of the pile
@return bool - true if it is a prime and false if not
*/
bool isPrime(int sum) {
	if (sum > 1) {
		for (int i = 2; i < sum; i++) {		//start at 2 because everything is divisible by 1
			if (sum % i == 0) {			//if the sum is divisible by any number then it is not prime
				return false;
			}
		}
		return true;	//it is prime
	}
	return false;	//it is not prime
}