/*
Objective:
Write a function which:
- is named "dayOfYear"
- accepts one argument of type Date – it's a structure similar to the one you were using before;
- returns an int value, being the number of the day within a certain year (assuming that 1st January is the first day of every year);
- should be mute.
*/

#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
	// The code you've inserted already
}

int monthLength(int year, int month) {
	// The code you've inserted already
}

int dayOfYear(Date date) {

	// Insert your code here
	
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}