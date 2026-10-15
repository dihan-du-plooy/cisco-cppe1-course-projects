/*
Objective:
Write a function that checks whether or not a number is prime.
The function:
- is called "isPrime";
- takes one int argument (the value to check);
- returns "true" if the argument is a prime number or "false" otherwise;
- should be mute.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    //the moment num does not retun a remainder number after being divided by any number between 1 and itself
    //num is not a prime number, we can use
    if (num > 1) {
        int determinant = 1;
        for (int i = 2; i < num; i++) {
            if (num % i) {
                continue;
            }
            else {
                determinant = 0;
                break;
                }
        }
        return determinant;
    }
    else
        return false;
}

int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}