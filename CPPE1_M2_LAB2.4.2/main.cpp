/*
    This program will function as a four function calculator for four basic operation (+, -, * and /).
    The program should read an int value representing the chosen option and act accordingly.

    If the option requires the execution of further operations, your program should read two double values, 
    perform an operation and display the result.

    Then, your program should display a menu and... the story repeats until the user enters 0.
*/
#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

int main(void) {
    int intValue;
    double x, y;
    cout << "MENUE: \n"<< endl << "0 - exit \n" << "1 - addition \n" << "2 - subtraction \n" 
    << "3 - multiplication \n" << "4 - division \n" << endl << "Your choice?" << endl << "Enter Option: ";
    //conditions for input of the MENUEU integer value options
    while(true) {
        if(!(cin >> intValue)) {
            cout << "This is not an integer. Please pass an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (intValue < 0 || intValue > 4)
            cout << "This integer is not within the range of options. Please pass a valid integer: ";
        else
            break;
        }
    //conditions for the input of the x and y numbers to be calculated
    cout << "Please pass a x value for arithmitic operation: ";
    cin >> x;
    cout << "Now please pass a y value for arithmitic operation: ";
    cin >> y;
    
    //switch function
    switch(intValue) {
        case 1: cout << "x added to y is equal to " << x + y << endl; break;
        case 2: cout << "x subtracted from y is equal to " << y - x << endl; break;
        case 3: cout << "x multiplied by y is equal to " << x * y << endl; break;
        case 4: cout << "x divided by y is equal to " << x / y << endl; break;
        case 0: cout << "calculator bypassed, goobdbye." << endl; break; 
    }
    return 0;
}


