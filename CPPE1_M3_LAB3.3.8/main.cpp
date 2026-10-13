/*
Objective:
Build a function which:
- is called "daysBetween";
- accepts two arguments of type Date – the first represents the "since" date, while the second represents the "till" date;
- returns an int value, being the number of days passed between both dates;
- returns -1 if the "till" date is earlier than the "since" date;
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

int daysBetween(Date d1, Date d2) {
    
}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}