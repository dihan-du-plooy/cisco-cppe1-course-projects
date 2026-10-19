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
	//set variables
	int maxball;
	int ballsno;
    bool numAlreadyUsed = true;

	//User input
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;

	//srand set and rand array population
	srand(time(NULL));
	int *predNum = new int[ballsno];
    for (int i = 0; i < ballsno ; i++) {
		//first run only (optimise by building predefined function)
		if (i == 0) {
			predNum[i] = rand() % maxball + 1;	//to ensure max rand amount stays within range
			cout << predNum[i] << " ";
		}
		//any other element
        else {
			//set first
			predNum[i] = rand() % maxball + 1;
			//check for duplicates without checking same element (could be optimised to stop checking for elements not yet set)
			for (int j = 0; j < ballsno && j != i; j++) {
				if (predNum[i] == predNum[j]) {
					do {
						predNum[i] = rand() % maxball + 1;
					} while (predNum[i] == predNum[j]);
					continue;
				}
				else 
					continue;
			}
			cout << predNum[i] << " ";
		}
    }
    delete[] predNum;
	return 0;
}