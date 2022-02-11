/*
This is the Student header
It has 3 private variables: string name, int score, char grade
It has 2 constructor 1 destructor and 1 function called print
@author Tonya Shulkey & Sydney Kao
@version Fall 2020
@date 8/31/2020
*/

//guard
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int score;
	char grade;
public:
	Student();		//Default constructor
	Student(string name, int score);	//Overloaded constructor

	~Student();		//Empty destructor
	void print();	//Display name(left), score(right), and grade(right)
};
#endif