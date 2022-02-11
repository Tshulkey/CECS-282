//Header Class
#ifndef CAN_H		//if this is not defined
#define CAN_H		//then define it
#include <string>
using namespace std;

class Can {
private:
	string contents;
	int size;
public:
	Can();
	Can(string, int);	//don't need names just types
	void display();
};
#endif		//won't define it again if its already defined