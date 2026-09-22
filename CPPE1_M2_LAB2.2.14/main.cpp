/*
This program is a factorial calculator (n!) for the given number n.
*/

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    unsigned long long result = 1, multiplier = 1;
    int n;
    cout << "Pass a number you would like the factoral of: ";
    while(true) {
        if(!(cin >> n)) {
            cout << "This is not an integer number. Please pass an integer number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if(n <= 0)
            cout << "Please pass a number bigger than 0: ";
        else
            break;
    }
    for(int i = 0; i < n; i++) {         //loop the amount of times as the give number
        result *= multiplier;           //each time it loops the result multiplies with 
        multiplier += 1;
    }
        cout << "The result is: " << result;
    return 0;
}