/*
Scenario
This program prints a square in the terminal according to certain conditions.
*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cout << "Please enter a value greater than 1: ";
    while(true) {
        if (!(cin >> n)) {
            cout << "This is not a number. Please pass a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (n <= 0)
            cout << "This is not a valid number. Please pass a valid number: ";
        else if (n > 58)
            cout << "This value will render the square too big to be printed. Please pass another number: ";
        else
            break;
    }
	cout << '+';
	for(int i = 0; i < (n*3); i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < n; i++) {
		cout << '|';
		for(int j = 0; j < (n*3); j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < (n*3); i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}