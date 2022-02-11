/*
This program prints Hello World Message
@author Tonya Shulkey
@version Fall 2020
@date 8/26/20
**/

#include <iostream> // directives

using namespace std; //std - standard use it when you don't want to write std::cout or std::cin all the time

//you can write your function before the main but if you write it below you need to write the header up above

int bin2Dec(const string& binaryString);

//This Function prints Hello World
int main() {
	//std::cout << "Hello World!\n";    if you don't include namespace std

	cout << "Hello World!\n";
	cout << bin2Dec("01010") << endl;

	return 0; //must return 0 in the main
}

/*
This function converts binary string to a decimal number
@param binaryString string of binary representation
@return the decimal version of the given binary string
**/
int bin2Dec(const string& binaryString) {
	return 10;
}