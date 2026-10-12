/*
Objective:
Write a function equipped with the following features:
- its name should be "isLeap";
- it accepts one argument of type int representing the year number;
- it returns a bool value: true if the year is leap and false otherwise;
- it should be mute! It mustn't write anything to the output – the only way it reveals its actions is by the value it returns.
*/

#include <iostream>
using namespace std;

bool isLeap(int year) { 
if (year % 100 != 0 && year % 4 == 0)       //leap year requirements
    return 1;
else if (year % 400 == 0 && year % 4 == 0)      //leap year requirements
    return 1;
else
    return 0;
}

int main(void) {

	for(int yr = 1995; yr < 2017; yr++) 
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;
}