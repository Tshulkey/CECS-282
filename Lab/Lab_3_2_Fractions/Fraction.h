//guard
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
	//Data members
private:
	int numer;
	int denom;
	//Public member functions
public:
	//Constructors
	Fraction(int num, int den);
	Fraction();
	Fraction(const Fraction& fract);
	//Deconstructor
	~Fraction();
	//Accessors
	int getNumer() const;
	int getDenom() const;
	void print() const;
	//Mutators
	void setNumer(int num);
	void setDenom(int den);

	//Helping private member functions the main can't call these but they can be used by the public functions and themselves
private:
	void normalize();
	int gcd(int n, int m);
};
#endif