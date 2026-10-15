#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {

	// number less than 2 cannot be prime
	if(num < 2)
		return false;

	// last possible divisor
	int top = sqrt(num);

	// try to divide num by subsequent values starting from 2
	for(int i = 2; i <= top; i++)
		if(num % i == 0)
			// division successful - it's not a prime
			return false;
	// none of divisions wers successful - it's a prime
	return true;
}

int main(void) {

	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}