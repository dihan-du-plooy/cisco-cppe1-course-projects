/*
Objective:
Write a program that tries to "predict" the numbers for a lottery:
- it should input two int values (the max amount of balls and the amount of balls drawn);
- it should "draw" as many balls as the user wants (numbers cant be double):
  create an array for all the numbers that have already been drawn (use the "new" operator!) 
  and check whether the new number hasn't been used already;
- finally, you should output your numbers and free up the previously allocated memory using the delete[] operator
*/

#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomSelection( int range, int ballCount) {
	//srand set and rand array population
	srand(time(NULL));
	int *predNum = new int[ballCount];
	for (int i = 0; i < ballCount ; i++) {
		//check for duplicates without checking same/past current element
		for (int j = 0; j < i; j++) {
			if (predNum[i] == predNum[j]) {
				do {
					predNum[i] = rand() % range + 1;
				} while (predNum[i] == predNum[j]);
				j = -1;
			}
		}
	cout << predNum[i] << " ";
	}
	delete[] predNum;
}

int main(void) {
	//set variables
	int maxball;
	int ballsno;
	//User input and validation
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	while (maxball < ballsno) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "The ball number drawn can't be bigger than the maximum number of balls. Input ball number again: ";
		cin >> ballsno;
	}
	randomSelection(maxball, ballsno);
	return 0;
}