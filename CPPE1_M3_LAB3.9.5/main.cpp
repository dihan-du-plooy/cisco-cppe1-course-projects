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
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));

	// Insert your code here

	return 0;
}