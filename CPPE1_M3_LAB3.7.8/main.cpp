/*
Objective:
Create 2 overloaded functions:
1 int function that: increments an integer by reference with a default value if no value gets passed
2 float function that: Increments a float with a default value if no value gets passed
*/
#include <iostream>
#include <cmath>
using namespace std;

int increment (int &a, int b = 1) {
    a += b;
    return a;
}

float increment (float &a, int b = 1) {
    a += b;
    return a;
}

int main(void) {

	int intvar = 0;
	float floatvar = 1.5;

	for(int i = 0; i < 10; i++)
		if(i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar,i);
			increment(floatvar);
		}
	cout << intvar * floatvar << endl;
	return 0;
}