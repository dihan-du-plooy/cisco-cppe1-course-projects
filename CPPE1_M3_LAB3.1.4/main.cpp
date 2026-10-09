//Fill a matrix with values that will turn it into a multiplication table. Without using brackets and indexing, only pointers. 
#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

	

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}