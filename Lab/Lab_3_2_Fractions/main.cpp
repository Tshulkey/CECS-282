#include "Fraction.h"
#include <iostream>
using namespace std;

/*
CECS 282 Lab 3
@author Tonya Shulkey
@version 9/14/2020
*/

Fraction& multiplyFract(Fraction& fr1, Fraction& fr2) {
	int n = fr1.getNumer() * fr2.getNumer();
	int d = fr1.getDenom() * fr2.getDenom();
	fr1.setDenom(1);
	fr1.setNumer(1);

	fr1.setNumer(n);
	fr1.setDenom(d);
	return fr1;
}

int main() {
	//Instantiation of some objects
	Fraction fract1;
	Fraction fract2(14, 21);
	Fraction fract3(11, -8);
	Fraction fract4(fract3);
	Fraction fract5(2, 0);

	//Printing the object
	cout << "Printing four fractions after constructed: " << endl;
	cout << "fract1: ";
	fract1.print();
	cout << "fract2: ";
	fract2.print();
	cout << "fract3: ";
	fract3.print();
	cout << "fract4: ";
	fract4.print();
	cout << "fract5: ";
	fract5.print();

	//Using mutators
	cout << "Changing the first two fractions and printing them: ";
	cout << endl;
	fract1.setNumer(4);
	cout << "fract1: ";
	fract1.print();
	fract2.setDenom(-5);
	cout << "fract2: ";
	fract2.print();

	//Using accessors
	cout << "Testing the changes in two fractions: " << endl;
	cout << "fract1 numerator: " << fract1.getNumer() << endl;
	cout << "fract2 numerator: " << fract2.getDenom() << endl;

	//Testing multiplyFract
	cout << endl << endl;
	fract1 = Fraction(1, 2);
	fract2 = Fraction(2, 3);
	fract3 = multiplyFract(fract1, fract2);

	cout << "Multiplied Fraction: ";
	fract3.print();
	return 0;
}