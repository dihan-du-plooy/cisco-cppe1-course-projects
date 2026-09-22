/*
This program tells you if a passed integer's 16 bit value is a palindrome or not.
*/

#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

int main(void) {
    long long temp_n;
    uint16_t final_n;
    uint8_t lsb, msb;
    cout << "Please pass an integer number: ";
    while(true) {
        if(!(cin >> temp_n)) {
            cout << "This is not an integer number. Please pass a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
        else
            break;
    }
    final_n = (uint16_t)temp_n;
    lsb = (uint8_t)(final_n);
    msb = (uint8_t)(final_n >> 8);

    //8 bit reverse algorithm: need to change it to self evaluated for loop.
    msb = ((msb >> 1) & 0x55) | ((msb & 0x55) << 1);
    msb = ((msb >> 2) & 0x33) | ((msb & 0x33) << 2);
    msb = ((msb >> 4) & 0x0F) | ((msb & 0x0F) << 4);

    if (lsb == msb)
        cout << "The bit value of this integer is a palindrome.";
    else
        cout << "The bit value of this integer is not a palindrome.";
    return 0;
}