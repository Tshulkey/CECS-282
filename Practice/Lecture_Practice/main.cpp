#include <iostream>
#include <stdio.h> // any file <> that ends in .h was probably created in c otherwise its c++
#include <cstdlib> // for random generator and seed
using namespace std;

void test(char A1[], int size) {	//char * A1	----- * is a pointer
	// int x = sizeof(A1); // A1 is a pointer not the actual array so it won't give you the size correctly

	cout << A1[9] << endl;
	cout << "There are " << size << " elements in the array" << endl;

	//cout << x << endl;

}

int main() {
	srand(time(0));	//srand stands for seed rand

	char chars[100] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

	//You need to send the size of the array to the function
	//You can't find the size of an array inside the function without it.
	int size = sizeof(chars) / sizeof(chars[0]);
	test(chars, size);

	int x = sizeof(chars);	//sizeof gives you bits in the variable or type in the param char = 1 bit 10 in the array makes it 10
	int nums[20];

	int sizeOfNums = sizeof(nums) / sizeof(nums[0]);	// will give you the actual size because 20 * 4 = 80 / 4 = 20 int is 4 bits

	cout << x << endl;
	
	int num[10];
	int min = 100;
	int max = 200;
	int range = max - min + 1;
	
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % range + min;	//use % number for a range 0 - number
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}

	// for (int i = 0; i < 10; i++){
	//		cout << rand() << endl;
	// }

	// int x = rand(); //Default seed is 1
	//cout << x << endl;
	// cout << RAND_MAX << endl; // largest int is (2^32) - 1

	return 0;
}