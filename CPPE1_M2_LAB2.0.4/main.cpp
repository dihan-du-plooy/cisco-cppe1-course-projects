/*
    Input: 0 = metric; 1 = imperial
    Imput: "meters", "feet"/"inches"
    output distance according to input
    metric output = "m" suffix
    imperial output = ' after foot and " after inches
    This progam asks a user for a number and keeps it in meter if metric and convert to feet/inches if imperial.
*/

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    float inputValue, measSystem, impTransition, inches, feet;
    cout << "I'm your measurement converter. Please give me a value bigger than 0: ";
    while(true) {
        if (!(cin >> inputValue)) {
            cout << "Input Invalid! You need to give me a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (inputValue <= 0)
            cout << "As I said, bigger than 0. Are you blind? Try again: ";
        else
            break;
    }
    cout << "Cool. Now tell me. Is your standard the metric system or the imperial system\n";
    while(true) {
        cout << "If metric pass me a 0. If imperial pass me a 1: ";
        if (!(cin >> measSystem)) {
            cout << "Input Invalid! You need to give me a number. ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (measSystem < 0 || measSystem > 1)
            cout << "As I said, 0 for metric and 1 for imperial. Are you blind? Try again. ";
        else
            break;
    }
    if (measSystem == 0) 
        cout << "Okay, so you're metric. "<< "This gives you " << inputValue << "m.";
    else {
        impTransition = inputValue * 39.3701; //meter to inch constant
        feet = (int)impTransition/12;
        inches = (impTransition- (feet*12));
        cout << "Okay, so you're imperial. " << "This gives you " << feet <<" feet and " << inches << " inches.\n";
    }
    return 0;
}