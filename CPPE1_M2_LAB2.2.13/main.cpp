/*
This program prints the n-th Fibonacci number. 
*/

#include <iostream>
using namespace std;

int main(void) {
    int n;
    unsigned long long finalNum;
    cout << "Please pass a number: ";
    while(true) {
        if(!(cin >> n)) {
            cout << "This is not a valid integer number. Please pass a valid integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (n < 1) 
            cout << "This is not a valid number. Please pass a valid number: ";
        else 
            break;
    }

    int num1 = 1;
    int num2 = 1;
    if (n == 1 || n == 2)
        cout << "Number = 1";
    else {
        for (int i = 0; i < (n-2); i++) {           
            finalNum = num1 + num2;
            num1 = num2;
            num2 = finalNum;
        }
        cout << "The number is: " << finalNum;
        }           
    return 0;
}