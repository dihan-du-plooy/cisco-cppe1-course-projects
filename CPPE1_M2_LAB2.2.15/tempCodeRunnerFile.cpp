/*
This program takes an integer value larger that 0 and gives you the bottom right corner value of the right hand helix square it's in
as well as the square it's in.
*/
#include <iostream>
#include <limits>
using namespace std;

int main(void) {
    int n, result, square = 4, counter = 0, y = 0, x = 0, z = 0;
    cout << "Please pass an integer number and this program will give you the bottom right corner of the right hand helix square it's in: ";
    while(true) {
        if(!(cin >> n)) {
            cout << "This is not a valid integer number. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if ( n < 1)
            cout << "Please pass an integer number larger than 0. Passing 0 or less for a helix square is not sensible:  ";
        else
            break;
    }
    for (int i = 0; i < n; i++) {
        if (n >= x && n <= y || n >= z && n <= x)
            break;
        else if (y == 0) {   //for the first square (where no y exist yet)
            y = ((counter + 1) + counter) * ((counter + 1) + counter);
            counter++;            
            continue;
        }
        else {   //for any square > 1 (first run establish x and y as well as counter 2
            z = y + 1;
            y = ((counter + 1) + counter) * ((counter + 1) + counter);                      
            x = y - 4 * counter;
            counter++;                                    
        }
    }
    cout << "The bottom right corner value of the square is " << x << " and you're in square " << counter;
    return 0;
}
