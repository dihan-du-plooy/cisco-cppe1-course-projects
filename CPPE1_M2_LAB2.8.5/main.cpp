/*

Plusplusland currency = plussar
banknotes = 50, 20, 10, 5 and 1

This program is a driver for an ATM, it finds the minimal number of banknotes needed to deliver any amount of money to a client
and print the values of all the needed banknotes.

*/
#include <iostream>
using namespace std;

int main(void) {
    int n, x = 0, counter = 0;
    int banknote[5] = {50, 20, 10, 5, 1};
    cout << "Please deposit your money: ";
    cin >> n;

    while(n < banknote[x])              //if for loop executes on an n value lower than the banknote the for loop will
        x++;                            //completely cancel and nothing will print

    for(int i = 0; i < (n/banknote[x]); i++) {
        counter += banknote[x];
        cout << banknote[x] << " ";
        if (counter/banknote[x] == n/banknote[x]) {
            x++;
            n -= counter;
            counter = 0;
            i = -1;                     //i reset's to -i because in a for loop i gets incremented at the end of each iteration
            while (n < banknote[x])     // the same check we do at the beginning needs to be done for the next value of x every time
                x++;
            continue;
        }
        else
            continue;
    }
    return 0;
}

