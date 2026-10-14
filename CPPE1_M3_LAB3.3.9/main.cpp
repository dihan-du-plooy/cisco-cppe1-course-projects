/*
Objective:
write a function returning the structure of previously defined type Date (Project 3.3.8), 
but filled with the current date (at the moment of function invocation).

- its name is "today" (just like that);
- it uses no arguments at all;
- it returns a structure of type Date, filled with the current date;
- it should be mute.
*/

#include <iostream>
#include <ctime>

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
    //use the predefined ctime "time" function and pass NULL to it for current time,
    //assign it to t of type time_t (from ctime) to save it as sec since epoc,
    time_t t = time(NULL);
    //pass t address to localtime to convert value to tm struct format
    //retrieve address of inner tm structure, dereference it and assign to tl
    tm tl = *localtime(&t);
    Date innerDate = {{tl.tm_year + 1900},{tl.tm_mon + 1},{tl.tm_mday},};
    return innerDate;
}

using namespace std;

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}