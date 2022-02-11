//Instead of having all the functions in the main we separate it into the header and implementation files
#include "Can.h"
#include <iostream>

int main() {

	//Can c1 = new Can(); <-- this is java code it is a reference
	//Can is an object

	//Card c1; default Card is still needed
	//Card c2('A', 'S');

	Can c1;
	Can c2("Peaches", 12);
	c1.display();
	c2.display();
}