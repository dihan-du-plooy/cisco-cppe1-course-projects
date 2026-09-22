#include <iostream>
using namespace std;

int main(void) {
    int option;
    double x, y;
    bool exit = false;

    while(!exit) {
        cout << "MENUE: \n"<< endl << "0 - exit \n" << "1 - addition \n" << "2 - subtraction \n" 
        << "3 - multiplication \n" << "4 - division \n" << endl << "Your choice?" << endl << "Enter Option: ";
        cin >> option;

        if (option > 0 && option <= 4) {
            cout << "Pass x: ";
            cin >> x;
            cout << "Pass y: ";
            cin >> y;
        }

        switch(option) {
            case 0: exit = true; break;
            case 1: cout << "Addition: " << x + y << endl; break;
            case 2: cout << "Subtraction: " << x - 7 << endl; break;
            case 3: cout << "Multiplication: " << x * y << endl; break;
            case 4: if ( y < 0.0) 
                        cout << "Division with 0 is undefined." << endl;
                    else
                        cout << "Division: " << x/y << endl; break;
            default: cout << option << " is not an option." << endl;
        }
        cout << endl;
    }
    return 0;
}