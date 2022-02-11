/*
This is the main program that has the main function.
It will create 5 student objects with names and scores it will print out the student name, scores, and grade
@author Tonya Shulkey & Sydney Kao
@version Fall 2020
@date 8/31/2020
*/

#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	Student s[5] = { Student("Tom", 85), Student("Alice", 71), Student("Jack", 93), Student("Janet", 76), Student("John", 66) };

	for (int i = 0; i < 5; i++) {
		s[i].print();
	}

	return 0;
}