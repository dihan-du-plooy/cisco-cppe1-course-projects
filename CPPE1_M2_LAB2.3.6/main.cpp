/*
This is a program that counts the one's (bits set to "1") in an integer variable.
*/

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    unsigned long long n, mask = 1;
    int counter = 0;
    cout << "Please pass an integer value to find out how many set bits (1) it holds: ";
    while(true) {
    if(!(cin >> n)) {
        cout << "That is not even an integer number. Please pass an integer number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    else
        break;
    }
    for (int i = 0; i < 64; i++) {
        if ((n & mask) != 0) {      //if the 1 bit of mask align with a 1 bit in n.
            counter++;
            mask <<= 1;
            continue;
        }
        else
            mask <<= 1;
            continue;
    }
    cout << "This integer has " << counter << " set bit(s).";
}
