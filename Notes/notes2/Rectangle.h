#ifndef Rectangle_H
#define Rectangle_H
class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double wVal, double hVal);
	double getArea(double aW, double aH);
	double getPerimeter(double PW, double PH);
	double getWidth() const;
	double getHeight() const;

};
#endif