/*
This program reveals if a matrix is symmetrical or not.
*/

#include <iostream>

using namespace std;

int main(void) {

	double matrix[][5] = { 	{ 1, 5, 4, 3, 5 },
			    	        { 5, 1, 2, 4, 3 },
			    	        { 4, 2, 1, 2, 4 },
			    	        { 3, 5, 2, 1, 2 },
			    	        { 5, 3, 4, 2, 1 } };

	int xAxis = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;
    int yAxis = 0;
	int count = 0;

	for (int i = 0; i < (sizeof(matrix)/ sizeof(matrix[0])); i++) {
		yAxis += (sizeof(matrix[count][0])/sizeof(matrix[0][0]));
		count += 1;
	}

	//IF THE MATRIX IS A SQUARE
	if (xAxis == yAxis) {
		//IF XY == YX THE MATRIX IS SYMMETRICAL!
		for (int i = 0; i < yAxis; i++) {
			for (int j = 0; j < xAxis; j++) {
				if (matrix[i][j] == matrix[j][i])
					continue;
				else {
					issymmetric = false; // exits the j loop early
					break;
				}
			}
			if (!issymmetric) break; //exits the i loop early
		}
	}
	else {
		issymmetric = false;
	}
	if(issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;

	//cout << xAxis << " = " << yAxis << endl;
	//cout << matrixCount << endl;
	//cout << matrixCount/xAxis << " = " << matrix[0][0] << endl;
	//cout << matrix[0][0] + matrix[1][1] << endl;
	//cout << sizeof(matrix) << " and " << sizeof(matrix[0]) << endl;
	//cout << sizeof(matrix)/ sizeof(matrix[0]);
	return 0;
}