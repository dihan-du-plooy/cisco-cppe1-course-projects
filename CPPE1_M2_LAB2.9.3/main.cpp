/*
    This program receives 2 times from a user on the same day and evaluates the difference in hour and minutes.
*/

#include <iostream>
#include <limits>
using namespace std;

int main(void) {
    //DECLARATION
    struct TIME {
    int hr, min;
    };
    TIME startTime, endTime;

    //INITIATION & VALIDATION
    //Starting Time 
    //start hour
    cout << "Please pass the starting hour: ";
    cin >> startTime.hr;
    while (true) {
        if (startTime.hr < 0) {
            cout << "The current hour can't be less than 00:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');        //clear max amount of characters before \n in input stream
            cin >> startTime.hr;
            continue;
        }
  
        else if (startTime.hr > 23) {
            cout << "The current hour can't be more than 23:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> startTime.hr;
            continue;
        }

        else
            break;
    }
    //start min
    cout << "Please pass the starting minute: ";
    cin >> startTime.min;
    while (true) {
        if (startTime.min < 0) {
            cout << "The start minute can't be less than 0. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> startTime.min;
            continue;
        }
  
        else if (startTime.min > 59) {
            cout << "The start minute can't be more than 59. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> startTime.min;
            continue;
        }

        else
            break;
    }

    //End Time
    //end hour
        cout << "Please pass the end hour: ";
    cin >> endTime.hr;
    while (true) {
        if (endTime.hr < 0) {
            cout << "The end hour can't be less than 00:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');        //clear max amount of characters before \n in input stream
            cin >> endTime.hr;
            continue;
        }
  
        else if (endTime.hr > 23) {
            cout << "The end hour can't be more than 23:00. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> endTime.hr;
            continue;
        }

        else if (endTime.hr < startTime.hr && endTime.hr != 0) {           //00:00 is the latest hour despite it being the smallest value
            cout << "The end hour can't be earlier than the starting hour. Please pass a valid hour: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> endTime.hr;
            continue;
        }

        else
            break;
    }
    //end min
    cout << "Please pass the end minute: ";
    cin >> endTime.min;
    while (true) {
        if (endTime.min < 0) {
            cout << "The end minute can't be less than 0. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> endTime.min;
            continue;
        }
  
        else if (endTime.min > 59) {
            cout << "The end minute can't be more than 59. Please pass a valid minute: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> endTime.min;
            continue;
        }

        else
            break;
    }

    //CALCULATION (Inbetween Hour/Min Duration)
    int betweenHour, betweenMin;
    //hr difference needs to be calculated in totals otherwise it will count a < hour difference as an hour and not min difference.
    if ((endTime.min - startTime.min) < 60 && (endTime.hr - startTime.hr) <= 1)
        betweenHour = 0;
    else
        betweenHour = endTime.hr - startTime.hr;
    //min difference need to be calculated in totals otherwise it reaps negative values
    if (endTime.hr == 0)
        betweenMin = (24*60 + endTime.min) - (startTime.hr*60 + startTime.min);
    else if (startTime.hr == 0)
        betweenMin = (endTime.hr*60 + endTime.min) - (startTime.hr*60 + startTime.min);
    else
        betweenMin = (endTime.hr*60 + endTime.min) - (startTime.hr*60 + startTime.min);

    //OUTPUT
    if (betweenHour < 10 && betweenMin < 10)
        cout << "The duraion inbetween will be: " << "0" << betweenHour << ":" << betweenMin << "0";
    else if (betweenHour < 10 && betweenMin >= 10)
        cout << "The duraion inbetween will be: " << "0" << betweenHour << ":" << betweenMin;
    else if (betweenHour >=10 && betweenMin < 10)
        cout << "The duraion inbetween will be: " << betweenHour << ":" << betweenMin << "0";
    else 
        cout << "The duraion inbetween will be: "<< betweenHour << ":" << betweenMin;
        
    return 0;
}