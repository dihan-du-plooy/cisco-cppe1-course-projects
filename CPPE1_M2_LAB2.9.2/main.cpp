/*
This program receives 2 valid values from the user as hour and minute. Saves it to a structure, 
and then gives you the time in HH:MM after an int value in minutes has been passed.
*/

#include <iostream>
#include <limits>
using namespace std;

int main(void) {
    //Declaration
    struct TIME {
    int hr, min;
    };
    TIME time;
    int eventMin;

    //Initiation/Input and Validation
    cout << "Please pass the current hour: ";
    cin >> time.hr;
    while (true) {
        if (time.hr < 0) {
            cout << "The current hour can't be less than 00:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');        //clear max amount of characters before \n in input stream
            cin >> time.hr;
            continue;
        }
  
        else if (time.hr > 23) {
            cout << "The current hour can't be more than 23:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> time.hr;
            continue;
        }

        else
            break;
    }

    cout << "Please pass the current minute: ";
    cin >> time.min;
    while (true) {
        if (time.min < 0) {
            cout << "The current time can't be less than 0. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> time.min;
            continue;
        }
  
        else if (time.min > 59) {
            cout << "The current horu can't be more than 59. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> time.min;
            continue;
        }

        else
            break;
    }

    if (time.hr < 10)
        cout << "Okay, so currently it's" << " " << "0" << time.hr <<":"<< time.min << endl << "Now pass the duration of the event in minutes: ";
    else
        cout << "Okay, so currently it's" << " " << time.hr <<":"<< time.min << endl << "Now pass the duration of the event in minutes: ";

    while(true) {
        if (!(cin >> eventMin)) {
            cout << "You have to pass an integer number. Please pass an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (eventMin < 1) {
            cout << "You can't have an event that's not a minute. Please pass a valid duration: ";
            continue;
        }
        else
            break;    
    }

    //Min and hour calculation
    time.min += eventMin;
    time.hr += (time.min / 60); 
    time.min = time.min % 60;   
    time.hr = time.hr % 24;    

    //Output
    if (time.hr < 10 && time.min < 10)
        cout << "The time after the event will be: " << "0" << time.hr << ":" << time.min << "0";
    else if (time.hr < 10 && time.min >= 10)
        cout << "The time after the event will be: " << "0" << time.hr << ":" << time.min;
    else if (time.hr >=10 && time.min < 10)
        cout << "The time after the event will be: " << time.hr << ":" << time.min << "0";
    else 
        cout << "The time after the event will be: "<< time.hr << ":" << time.min;
        
    return 0;
}



