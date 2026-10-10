#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

	// p points to the top-left element of the matrix
	// i.e. to the beginning of matrix
	int *p = (int *)matrix;
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			// we have to find distancee between first element and [i][j] element
			// it is j * 10 (as there are 10 elements in every row) + i 
			// points to the elements
			int *q = (p + j * 10) + i;
			*q = (i+1) * (j+1);
		}
	}		

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}