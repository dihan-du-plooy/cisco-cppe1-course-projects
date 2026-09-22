/*
This program checks if a declared vector contains a palindrome by using a smart for loop,
regardless of whether the vector stores an even or odd number of elements. 
*/
#include <iostream>

using namespace std;

int main(void) {
    int vector[] = {1, 7, 3, 8, 5, 8, 3, 7, 1};
    bool ispalindrome = true;
    int n = sizeof(vector)  / sizeof(vector[0]);
    int x = n; 

    if ((n%2) == 0) {
        for (int i = 0; i < (n/2); i++) {        //for half the vector
            if (vector[i] == vector[x-1]) {         //if current element is equal to opposite element
                x -= 1;     //decuct total elements for next comparison
                continue;
            }
            else {
                ispalindrome = false;
                break;
            }
        }
    }
    else {
        for (int i = 0; i <= (n/2); i++) {       //smaller or equal than to compensate for the middle value
            if (vector[i] == vector[x-1]) {
                x -= 1;
                continue;
            }
            else {
                ispalindrome = false;
                break;
            }
        }
    }

    if(ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	return 0;
}