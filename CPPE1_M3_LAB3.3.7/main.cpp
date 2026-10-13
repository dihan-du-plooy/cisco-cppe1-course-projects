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
	// Project 3.3.5 Body
    if (year % 100 != 0 && year % 4 == 0)       //leap year requirements
        return 1;
    else if (year % 400 == 0 && year % 4 == 0)      //leap year requirements
        return 1;
    else
        return 0;
}

int monthLength(int year, int month) {
	// Project 3.3.6 Body
    int day;
    int diffMonth[2][7] = {{1, 3, 5, 7, 8, 10, 12}, {2, 4, 6, 9, 11, 2, 4}};        //last 2, 4 is only to fill array so it won't default to 0
	switch (month) {
        case 2: {
            if (isLeap(year))
                day = 29;
            else
                day = 28;
        } break;
        default: {
            for (int moType = 0; moType < sizeof diffMonth/sizeof diffMonth[0]; moType++) {
                for (int mo = 0; mo < sizeof diffMonth[moType]/sizeof diffMonth[moType][0]; mo++) {
                    if (diffMonth[moType][mo] == month && moType == 0) {   
                        day = 31;
                        break;
                    }
                    else if (diffMonth[moType][mo] == month && moType == 1) {
                        day = 30;
                        break;
                    }
                    else {
                        day = 0;
                        continue;
                    }
                }
                if (day > 0)        //if the 31 day months have already been checked and could successfully assign a day
                    break;          // the all iterations should bypass, not jusy mo.
                else
                    continue;
            }

        }
    }
    return day;
}

int dayOfYear(Date date) {
    //assign the day of the month to dayOfYear initially
    int dayOfYear = date.day;
    //add the sum of days of the prev months to dayOfYear
    for (int prevMonth = 1; prevMonth < date.month; prevMonth++)
        dayOfYear += monthLength(date.year, prevMonth);
    return dayOfYear;
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}