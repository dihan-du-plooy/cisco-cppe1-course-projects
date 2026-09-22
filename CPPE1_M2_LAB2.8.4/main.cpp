/*
vector2 must store the same values as vector1 but in a different order, all values shifted to the right while the last element goes
to the first position. 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
	int vector1[11] = {4, 7, 2, 8, 1, 3, 0, 6, 8, 10, 2};
	int vector2[11];

    for (int i = 0; i < 11; i++) {
        vector2[i] = vector1[10 - i];
    }
    	for(int i = 0; i < 11; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}
