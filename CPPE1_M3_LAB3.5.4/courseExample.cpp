#include <iostream>
using namespace std;
// 1st parameter: type=int, passing=by reference
// 2nd parameter: type=int, passing=by value, default value=1
void increment(int &var, int inc = 1) {
	var += inc;
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