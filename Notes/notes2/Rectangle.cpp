#include "Rectangle.h"
/*
This constructor creates a default rectangle of length and width 1
*/

Rectangle::Rectangle() {
	height = 1;
	width = 1;
}

Rectangle::Rectangle(double hVal, double wVal) {
	height = hVal;
	width = wVal;
}

double Rectangle::getArea(double aW, double aH) {
	return aW * aH;
}

double Rectangle::getPerimeter(double PW, double PH) {
	return 2 * PW + 2 * PH;
}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::getHeight()const {
	return height;
}