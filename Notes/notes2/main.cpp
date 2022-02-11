#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle r1(40, 4);
	cout << "Height: " << r1.getHeight() << endl;
	cout << "Expected: 4" << endl;
	cout << "Width: " << r1.getWidth() << endl;
	cout << "Expected: 40 " << endl;
	cout << "Area r1: " << r1.getArea(40, 4) << endl;
	cout << "Expected: 160" << endl;
	cout << "Perimeter r1: 88" << r1.getPerimeter(40, 4) << endl;
	cout << "Expected:  " << endl;
	Rectangle r2(35.9, 3.5);
	cout << "Height r2: " << r2.getHeight() << endl;
	cout << "Expected: 3.5" << endl;
	cout << "Width r2: " << r2.getWidth() << endl;
	cout << "Expected: 35.9" << endl;
	cout << "Area r2: " << r2.getArea(35.9, 3.5) << endl; cout << "Expected:  125.65" << endl;
	cout << "Perimeter r2: " << r2.getPerimeter(35.9, 3.5) << endl; cout << "Expected:  78.8" << endl;
}
