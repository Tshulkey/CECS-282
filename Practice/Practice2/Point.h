#ifndef POINT_H	//if not defined
#define POINT_H	//then define

/*
header file
	This class is the pointer class that has two instance variables x and y
*/

class Point {
//Instance Variables
private:
	double x;
	double y;
public:
	//Constructors and Functions
	Point();
	Point(double xVal, double yVal);
	void move(double dx, double dy); //Setter or mutator
	double getX() const;	//getter or accessor
	double getY() const;

};	//Classes need a semicolon after the bracket
#endif //will make sure it is only defined once