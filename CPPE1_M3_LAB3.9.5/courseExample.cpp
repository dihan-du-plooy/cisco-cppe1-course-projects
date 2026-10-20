#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// function IsIn checks if v is equal to 
// any of first s elements in vector t
bool IsIn(int v, int t[], int s) {
	// iterate thru s first elements of t
	for(int i = 0; i < s; i++)
		if(t[i] == v)
			// equal element found - IsIn returns true
			return true;
	// no equal element found - IsIn returns false
	return false;
}
// get a random value from range 1..mb
int RandBall(int mb) {
	return rand() % mb + 1;
}
int main(void) {
	int maxball;
	int ballsno;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));
	int *balls = new int[ballsno];
	for(int b = 0; b < ballsno; b++) {
		// get next random value
		int bl = RandBall(maxball);
		// repeat until new value is unique in balls
		while(IsIn(bl, balls, b))
			bl = RandBall(maxball);
		// ok - it's unique - put it into balls
		balls[b] = bl;
	}
	for(int b = 0; b < ballsno; b++)
		cout << balls[b] << " ";
	cout << endl;
	delete[] balls;
	return 0;
}