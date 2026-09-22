/*
 This program calculates PI using Leibniz's method. 
 The user must provide a natural number that's not 0 that will depict the amount of iterations the calculation will follow.
 At the en the code will output the calculated value of PI.
 The more iterations, the higher the accuracy.
 For good accuracy we require a long double (extended float).
*/

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void) {
    int iterVal;
    long double denominator, fraction, pi;
    cout << "Hi user, please pass a natural number larger than 4: ";
    while(true) {
        if (!(cin >> iterVal)) {
        cout << "This is not an integer number and therefore it can't possibly be a natural number.\n"
        << "Please pass a natural number larger than 4: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
        }
        if (iterVal < 4)
            cout << "This number is not a natural number larger than 4. Try again: " << endl;
        else
            break;
    }
    cout << "Cool. The number of iterations the calculation will follow is " << iterVal << "." << endl;
    //Leibniz's Calculation
    denominator = 1.0;
    pi = 0.0;
    for (int i = 0;i != iterVal;++i) {
        if (i % 2 == 0) {
            pi += 1/denominator;
        }   
        else {
            pi -= 1/denominator;
        }
        denominator += 2;
    }
    cout << "Pi is = " << setprecision(16) << pi * 4 << endl;
}