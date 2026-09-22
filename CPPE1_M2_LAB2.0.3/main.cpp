#include <iostream>
#include <limits>
using namespace std;

/* 
This program takes 2 values. A Gross Price and a Tax Rate and it gives you the Net Price and the Tax Value.
It has constraints that does not allow you to pass values outside a certain range and type.
*/
int main(void) {
	float grossPrice, taxRate;
	cout << "Please enter your Gross Price: ";
	while(true) {
		if (!(cin >> grossPrice)) {
			cout << "Invalid Input! Please enter a number: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (grossPrice <= 0)
			cout << "This price is not valid. Please enter a price higher than 0: ";
		else
			break;
	}
	cout << "Gross Price logged.\n";
	while(true) {
		cout << "Please enter a tax rate as a number (e.g. 15 for 15%): ";
		if (!(cin >> taxRate)) {
			cout << "Input Invalid! Please enter a number.\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (taxRate < 15 || taxRate > 45)
			cout << "You entered an unrealistic tax rate. Please try again\n";
		else
			break;
	}
	cout << "Tax Rate Logged.\n";
	float netPrice = grossPrice * (100/(100 + taxRate));
	float taxValue = netPrice * (taxRate/100);
	cout << "Net price: " << netPrice << endl;
	cout << "Tax value: " <<  taxValue << endl;
	return 0;
}