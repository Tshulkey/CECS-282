#include "Point.h"

// :: is used to access class function and namespaces
/*
This constructor sets coordinates to the origin
*/
Point::Point() {
	x = 0;
	y = 0;
}

/*
This constructor sets coordinates to the origin
@param xVal x-value
@param yVal y-value
*/
Point::Point(double xVal, double yVal) {
	x = xVal;
	y = yVal;
}

void Point::move(double dx, double dy) {
	x += dx;
	y += dy;
}

double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}