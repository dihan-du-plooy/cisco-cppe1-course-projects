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
    if (year % 100 != 0 && year % 4 == 0)       //leap year requirements
        return 1;
    else if (year % 400 == 0 && year % 4 == 0)      //leap year requirements
        return 1;
    else
        return 0;
}

int monthLength(int year, int month) {
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

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}