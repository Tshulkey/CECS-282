//Implementation file for the Can class
#include "Can.h"	//user declared file uses "" library uses <>
#include <iostream>
using namespace std;

//Constructors and functions
Can::Can() {
	contents = "Empty";
	size = 0;
}

Can::Can(string c, int s) {
	contents = c;
	size = s;
}

void Can::display() {
	cout << size << " ounces of " << contents << endl;
}