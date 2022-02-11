#include <iostream>
#include <stdlib.h>	//for the srand

using namespace std;
class Rectangle {
private:
	double x;
	double y;
public:
	Rectangle() {
		x = 0;
		y = 0;
	}
	Rectangle(double w, double h) {
		x = w;
		y = h;
	}
	double getX() const {
		return x;
	}
};

//void swap(int a, int b) Pass by value a and b will not be affected
//void swap(int& a, int& b) // pass by reference a and b can be changed
//& sign can be int& variable or int &variable
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "INSIDE FUNCTION: " << a << " " << b << endl;
}

//2D array you need a nested loop and in the param int a[] [45] must have the size in the second index box.
//for loop will have i 0-10 and j 0-45 or whatever
//Array is already pass by reference so it doesn't need & sign
void upDateArray(int a[] /*[45]*/, int size) {
	srand(time(NULL)); //default is 0
	for (int i = 0; i < size; i++) {
		//a[i]++; //a is a reference pointing to the same place as arr so if a changes so does arr
		a[i] = rand() % 100;	//Will get a number from 0-99 need to make a seed to make the random different everytime it runs otherwise it will be the same.

		//If you want a range of random from 10-50 inclusive
		//a[i] = 10 + rand() % + 41;
	}
}

int main() {
	//rectangle use the class
	Rectangle rects[3] = { Rectangle(), Rectangle(20, 20), Rectangle(30, 40) };
	for (Rectangle rect : rects) { // for each goes through everything index for loop you need to know the size
		cout << "WIDTH IS: " << rect.getX() << endl;
	}

	//2D array
	int twoDArr[10][45];

	int arr[10] = { 1, 2, 4, 5, 6, 7, 8, 9, 10, 3 };	//need size does not check out of bounds you have to check yourself

	//No array length function must have size in the declaration
	//You cannot return an array type

	arr[5] = 100;
	cout << arr << endl;	//address of the first element in the array
	cout << &arr[0] << endl; // also prints the adress of the first element

	upDateArray(arr, 10); //array is pass by reference by default after the function call is done on line 14 it will jump back here.

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << arr[0] << endl;	// bad because the program will run without you knowing there is a mistake
	cout << arr[1] << endl;	//four bits difference because int is 4 bits

	int x = 10;
	int y = 100;

	cout << "BEFORE: " << x << " " << y << endl;
	swap(x, y);
	cout << "AFTER: " << x << " " << y << endl;

	return 0;
}