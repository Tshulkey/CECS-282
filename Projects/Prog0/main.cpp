//Tonya Shulkey
//CECS 282-01
//Prog 0 - Happy Birthday
//Due 8/31/20

#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    int birthYear;
    char thisYear;
    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you " << name << "? ";
    cin >> age;
    cout << name << ", have you had your birthday yet this year?? (y/n)";
    cin >> thisYear;

    if (thisYear == 'y' || thisYear == 'Y')
        birthYear = 2020 - age;
    else
        birthYear = 2020 - age - 1;

    cout << endl;
    cout << "Hi " << name << "!!!\n\n I guess that you were born in " << birthYear << endl;
    cout << "\n\nPress 'Enter' to continue:";

    getchar(); //this Line will clear out the input buffer - there is a leftover carried
    getchar(); //this line will cause the program to pause until you press the Enter key
    return 0;
}