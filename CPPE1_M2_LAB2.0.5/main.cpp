    /*
    Input required: 
    year number as int; between 20th and 21st century
    month number as int; between 1 and 12
    day number as int; realistic day numbers
    */

    #include <iostream>
    #include <limits>

    using namespace std;

    int main(void) {
        int month, year, day, weekday;
        cout << "Hi User. Please enter a year within the 20th or 21st century: ";
        while(true) {
            if (!(cin >> year)) {
                cout << "Invalid Type! "
                << "Please make sure your number is an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (year < 1900 || year > 2999) 
                cout << "This number is outside the 20th or 21st century. Please pass a valid number: ";
            else
                break;
        }
        cout << "Hi User. Please enter a realistic month: ";
        while(true) {
            if (!(cin >> month)) {
                cout << "Invalid Type! "
                << "Please make sure your number is an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (month < 1 || month > 12) 
                cout << "This number is not a valid month. Please pass a valid number: ";
            else
                break;
        }
        cout << "Hi User. Please enter a realistic day: ";
        while(true) {
            if (!(cin >> day)) {
                cout << "Invalid Type! "
                << "Please make sure your number is an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && (day > 30 || day < 1)) ||
                ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31 || day < 1)))
                cout << "This is an invalid number. Either it's not realistic for the month or it's not a realistic day: ";
            else
                break;
        }
        cout << "Hi User. Please wait while we calculate the weekday number for you..." << endl;
        // Zeller's Congruence Algorithm
        month -= 2;
        if (month <= 0) {
        month += 12;
        year -= 1;
        }
        month = (month * 83)/ 32;
        month += day;
        month += year;
        month += year/4;
        month -= year/100;
        month += year/400;
        weekday = month % 7;
        if (weekday < 0) {
            weekday += 7;
        }
        
        if (weekday == 0)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Sunday.";
        else if (weekday == 1)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Monday.";
        else if (weekday == 2)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Tuesday.";
        else if (weekday == 3)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Wednesday.";
        else if (weekday == 4)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Thursday.";
        else if (weekday == 5)
            cout << "Congrats! A weekday number is ready for you! " << weekday << " - Friday.";
        else
            cout << "Congrats! A weekday number is ready for you! 6 - Saturday.";
        return 0;
    }
