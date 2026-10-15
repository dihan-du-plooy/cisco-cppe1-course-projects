/*
Objective:
Create a function according to the following:
- its name is "increment";
- it returns void;
- when invoked with one argument (an int variable), it simply increments the variable by 1;
- when invoked with two arguments (an int variable and int expression), it increments the variable by the expression's value.
*/
#include <iostream>

using namespace std;

int increment(int &var1, int var2 = 1) {
    var1 += var2;
    return var1;
}

int main(void) {
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
			increment(var);
		else
			increment(var,i);
	cout << var << endl;
	return 0;
}