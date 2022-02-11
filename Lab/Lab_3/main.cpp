/*
CECS 282 Lab 3
@author Tonya Shulkey
@version 9/14/2020
*/

#include <iostream>
using namespace std;

/*
This takes two integer numbers and finds the larger value
@param int num1, num2 these are the two integers that are being compared
@return int will return either num1 or num2
*/
int larger(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else if (num1 < num2) {
		return num2;
	}
	return num1;	//if they have the same value just return first one
}

/*
This is the largerOfThree function that takes three ints and finds the larger value
@param int &num1, &num2, &num3
@return int value or num3 the largest number from the three
*/
int& largerOfThree(int& num1, int& num2, int& num3) {
	num1 = larger(num1, num2);	//compare the first 2 first and the larger one becomes num1
	if (num1 > num3) {	//now compare the larger one and num3
		return num1;
	}
	else if (num1 < num3) {
		return num3;
	}
	return num1;	//they are both equal so return whichever
}

/*
This is the main method that will ask the user for inputs for the 2 numbers then for the three numbers it will use the functions above to find the largest value
*/
int main() {
	int num1;
	int num2;
	int num3;

	cout << "Please enter 2 numbers: " << endl;

	cin >> num1;
	cin >> num2;

	cout << "The larger value is: " << larger(num1, num2) << endl;

	cout << "Please enter 3 numbers" << endl;

	cin >> num1;
	cin >> num2;
	cin >> num3;

	cout << "The larger value is: " << largerOfThree(num1, num2, num3) << endl;

	return 0;
}