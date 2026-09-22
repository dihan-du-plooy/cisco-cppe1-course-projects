/*
The following program is based on the Collatz conjecture, which states that for any natural number c0, 
the following process will eventually reach the number 1:

1. Write a program which reads one natural number and executes the following steps:
    1 take any non-negative and non-zero integer number and name it c0;
    2 if it's even, evaluate a new c0 as c0 / 2 otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
    3 if c0 ≠ 1, skip to point 2

...as long as c0 remains different from 1.
2. Count the steps needed to achieve the goal. 
3. Output all intermediate values of c0, too

Hint: the most important part of the problem is how to transform Collatz's idea into a "while" loop – this is the key to success.

*/
#include <iostream>
# include <limits>

using namespace std;

int main(void) {
    int c0;
    cout << "Enter a natural number (a non-negative and non-zero integer): ";
    while (true) {
        if (!(cin >> c0)) {
            cout << "Invalid input. That isn't even a number. Enter a natural number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (c0 <= 0)
            cout << "This number is not a natural number. Please enter a non-negative and non-zero integer: ";
        else
            break;
    }
    cout << "Starting with c0 = " << c0 << endl;
    int steps = 0;
    while (c0 != 1) {
        ++steps;
        if (c0 % 2 == 0)
            c0 = c0/2;
        else
            c0 = c0 * 3 + 1;
        cout << "For round " << steps << " c0 is equal to " << c0 << endl;
        continue;
    } 
     cout << "Congragulations c0 = " << c0 << endl;
    return 0;
}

