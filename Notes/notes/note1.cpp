/*
This program converts binary string to a decimal number
@author Tonya Shulkey
@version Fall 2020
@date 8/24/2020
*/

#include <iostream>
// #include "math.h"  if you wanted to use pow from math
using namespace std;

string bin_Num;   //This is the string variable for the user's binary number

// int bin2Dec(const string& binaryString); if you put the function under main

//This is the function that converts binary numbers to decimal
//It does not use pow or Math functions already built
int bin2Dec(const string& binaryString) {
    int length = binaryString.length();     //The length of the binary number
    int number = 0;                   //The total decimal number
    int exp = 0;                      //The exponent

    for (int i = length - 1; i >= 0; i--) {   //the for loops starts at the end of the binary string

        if (binaryString[i] == '1') {     //Check if the index char is equal to 1
            if (exp == 0) {   //if the exponent is 0 you can't multiply it by 2 because it wouldn't be right so assign number to 1
                number += 1;
            }
            else {     //otherwise use temp value to hold the total when multiplying 2 by itself as many times as the exponent is starting at 1 because exponent 0 is taken care of
                int temp = 1;
                for (int i = 0; i < exp; i++) {
                    temp *= 2;
                }
                number += temp;     //Add the temp number, or 2 to the power of exponent number, to the total number.
            }
            // number += pow(2,exp);    if you wanted to use pow from math
        }
        exp++;      //update the exponent with each iteration.
    }
    return number;      //Return the total decimal value of the number
}

//This is the main method it will ask the user to enter a binary number using cout
//The value will be stored into the variable bin_Num using cin
//Then it will use the bin2Dec funtion to find the decimal value
int main() {
    cout << "Enter a binary string" << endl;
    cin >> bin_Num;
    cout << bin2Dec(bin_Num) << endl;
    return 0;   //retun 0 because its a return int function
}
