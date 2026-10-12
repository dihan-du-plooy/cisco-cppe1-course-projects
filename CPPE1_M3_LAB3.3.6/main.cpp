/*
Objectives:
Write a function equipped with the following features:
- its name is "monthLength"
- it accepts two arguments of type int: year number (first) and month number (second)
- it returns an int value which represents a length of specified month in a specified year (obviously, year is important only when month == 2) or 0 if any of the input arguments isn't valid
- it should be mute
*/

#include <iostream>

using namespace std;

bool isLeap(int year) { 
	//function body from project 3.3.5

}

int monthLength(int year, int month) {
	
}

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}