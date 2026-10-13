#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
	if (year % 4 != 0)
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 != 0)
		return false;
	else
		return true;
}

int monthLength(int year, int month) {
	switch(month) {
		case  1:
		case  3:
		case  5:
		case  7:
		case  8:
		case 10:
		case 12: return 31;
		case  4:
		case  6:
		case  9:
		case 11: return 30;
		case 2 : if(isLeap(year)) return 29; else return 28;
		default: return 0;
	}
}

int dayOfYear(Date date) {
	int days = 0;

	for(int mo = 1; mo < date.month; mo++)
		days += monthLength(date.year, mo);
	days += date.day;
	return days;
}

int daysBetween(Date d1, Date d2) {

	// d2.year must be greater or equal to d1.year
	if(d1.year > d2.year)
		return -1;
	// if years are the same...
	if(d1.year == d2.year) {

		// d2.month must be greater or equal to d1.month
		if(d1.month > d2.month)
			return -1;
		// if months are the same... 
		if(d1.month == d2.month) {

			// d2.day must be greater or equal to d1.day
			if(d1.day > d2.day)
				return -1;

			// simple case: the same year, the same month, result is obvious
			return d2.day - d1.day;
		}
		// the same year so number of days may be computed
		// using already defined function dayOfYear()
		return dayOfYear(d2) - dayOfYear(d1);
	}
	int days;

	// Dec31 - last day of year
	Date Dec31 = { d1.year, 12, 31 };

	// days since d1 till end of year
	days = dayOfYear(Dec31) - dayOfYear(d1);

	// sum up all days in all intermediary years
	for(int yr = d1.year + 1; yr < d2.year; yr++)
		if(isLeap(yr))
			days += 366;
		else
			days += 365;

	// include days in last year	
	days += dayOfYear(d2);
	return days;
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