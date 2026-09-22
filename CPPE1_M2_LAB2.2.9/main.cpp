/*
Write a program which shows the n-th power of two (n will be the input for the program). We'll use the following assumptions:

the largest value of n to take into consideration is 63, as unsigned long integers use exactly 64 bits to represent their values 
(note: a value of 2n needs n+1 bits – can you explain why?);
we won't use any actual exponentiation – we're going to substitute it with repeated multiplications.
Write a program that implements the task described above.

Test your code using the data we've provided.
*/

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    int n;
    unsigned long long result;
    cout << "Hi user. If you want to work out the power of 2 to the nth place. Please pass n: ";
    while(true) {
        if(!(cin >> n)) {
            cout << "The value you passed is not a number. Please pass a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (n > 63) 
            cout << "This value is too large for the computer to compute. Please pass a smaller number";
        else
            break;
    }
    result = 1;
    for (int i = 0;i < n; ++i)
        result *= 2;
    cout << " 2 to the power of " << n << " is equal to " << result << endl;
    return 0;
}


