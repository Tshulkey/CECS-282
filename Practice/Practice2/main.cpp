#include <iostream>
#include "Point.h"

using namespace std;
int bin2Dec(const string& binaryString); //Prototype

int main() {
	Point p;	//Default constructor
	Point p1(100, 100);		//overloaded constructor
	Point p2 = p1;	//clone in java
	p2.move(10, 10);

	cout << "Position for point p (" << p.getX() << ", " << p.getY() << ")" << endl;
	cout << "Expected x: 0 y: 0" << endl;

	cout << "Position for point p1 (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "Expected x: 100 y: 100" << endl;

	p.move(50, 40);
	p1.move(-10, -30);

	cout << "Position for point p (" << p.getX() << ", " << p.getY() << ")" << endl;
	cout << "Expected x: 50 y: 40" << endl;

	cout << "Position for point p1 (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "Expected x: 90 y: 70" << endl;

	return 0;

}