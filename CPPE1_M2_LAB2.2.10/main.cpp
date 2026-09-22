/*
This program evaluate negative and positive powers of 2.
*/
#include <iostream>
#include <limits>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;
    double result;
    cout << "Hi user. If you want to work out the power of 2 to the nth place. Please pass n: ";
    while(true) {
        if(!(cin >> n)) {
            cout << "The value you passed is not a number. Please pass a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else
            break;
    }
    result = 1.0;
    if (n < 0) {
        for (int i = 0; i < abs(n); ++i) {
            result *= 2;
            cout.precision(20);
        }
        cout << " 2 to the power of " << n << " is equal to " << 1/result << endl;
    }
    else {
        for (int i = 0;i < n; ++i)
            result *= 2;
        cout << " 2 to the power of " << n << " is equal to " << result << endl;
    }
    return 0;
}
