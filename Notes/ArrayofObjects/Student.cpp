/*
This is the Student implementation that defines the functions
It will be able to get the names of students and their score
It will calculate the grade based on the scores
There is a destructor and a function to print the student name, score, and grade
@author Tonya Shulkey & Sydney Kao
@version Fall 2020
@date 8/31/2020
*/

#include "Student.h"

Student::Student() {
	name = "";
	score = 0;
	grade = ' ';
}

/*
This is the Student constructor that sets the name and score of the student and sets the grade based on the student's score
@param string name - name of student
@param int score - student score
*/
Student::Student(string name, int score) {
	this->name = name;
	this->score = score;
	if (score <= 100 && score >= 90) {
		grade = 'A';
	}
	else if (score <= 89 && score >= 80) {
		grade = 'B';
	}
	else if (score <= 79 && score >= 70) {
		grade = 'C';
	}
	else if (score <= 69 && score >= 55) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
}

/*
This is the Student destructor that will delete student objects at the end
*/
Student :: ~Student() {

}

/*
This is the Student print function that will display the name of the student their score and their grade
*/
void Student::print() {
	cout << "Name: " << name << " Score: " << score << " Grade: " << grade << endl;
}