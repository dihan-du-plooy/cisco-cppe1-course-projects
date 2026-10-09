//Fill a matrix with values that will turn it into a multiplication table. 
// You may only use brackets and indexing once in the declaration.

#include <iostream>
using namespace std;

int main(void) {

	int matrix[10][10] = { };
    int *p1 = &matrix[0][0];

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
            *p1 = (1+j) * (1+i);
            p1++;
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}