/*
    This program takes an integer number from a user that represents a year.
    It the outputs the Easter date of that year using Gauss' Easter Algorithm.
*/

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    int year;
    cout << "Hi User. Give me a year within the 20th and 21st century " 
    << "and I'll tell you on which date Easter falls for that year: ";
    // Get user input with validation and constraints
    while(true) {
        if (!(cin >> year)) {
            cout << "Invalid Input: This is not a year value. Please enter a year: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (year < 1900 || year > 2999)
            cout << "This year falls outside of the valid centuries. "
        << "Please provide a valid year: ";
        else
            break;
    }

    // Calculate Easter date using Gauss' Easter Algorithm
    int a, b, c, d, e;
    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (a * 19 + 24) % 30;
    e = (2*b + 4*c + 6*d + 5) % 7;
    if (d + e < 10)
        cout << "Easter falls on March " << d + e + 22 << " in the year " << year << ".";
    else
        cout << "Easter falls on April " << d + e - 9 << " in the year " << year << ".";
    return 0;
}