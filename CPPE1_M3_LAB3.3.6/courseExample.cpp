#include <iostream>

using namespace std;

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
	// We use one case for every proper month and 
	// default for invalid month number.
	// February needs special treatment.
	// Not very elegant but working :)
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

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}