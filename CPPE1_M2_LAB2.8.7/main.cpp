/*
This program calculates the mean of range of values in 4 dirrerent ways: 
arithmetic mean, harmonic mean, geometric mean and root mean squre.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	//arithmetic mean calculation
	double x = 0;
	for (int i = 0; i < n; i++)
		x += vector[i];
	ArithmeticMean = x/n;

	//harmonic mean calculation
	x = 0;
	for (int i = 0; i < n; i++)
		x += 1/vector[i];
	HarmonicMean = n/x;

	//geometric mean calculation
	x = 1;
	for (int i = 0; i < n; i++)
		x *= vector[i];
	GeometricMean = pow(x, 1/(double)n);

	//root mean calculation
	x = 0;
	for (int i = 0; i < n; i++)
		x += pow(vector[i], 2);
	RootMeanSquare = sqrt(x/n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}