#include <iostream>
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
	int days = 0;	// sum up all days in months prior to date.month
	for(int mo = 1; mo < date.month; mo++)
		days += monthLength(date.year, mo);
	days += date.day;	// include days stored in date.day
	return days;
}
int main(void) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}