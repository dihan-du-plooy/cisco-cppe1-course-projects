#include <iostream>

using namespace std;

int main(void) {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int *p = vector;
	int min = *p;       //used a standard variable instead of a second pointer
	p++;
	for(int i = 1; i < n; i++) {        //started count at second element to avoid useless first iteration
		if(*p < min)
			min = *p;
		p++;
	}
	cout << min << endl;
	return 0;
}