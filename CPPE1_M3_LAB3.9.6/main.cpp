/*
Objective:
Complete this project that serves the purpose of dynamic data collection.
Two additional requirements of the function:
- if the collection is empty, it should allocate a one-element vector and store a new value in it
- if the collection is not empty, it should allocate a new vector with a length greater by one than the current vector, 
  then copy all elements from the old vector to the new one, append a new value to the new vector and finally free up the old vector.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//elno stores number of elements & elements stores the dynamically allocated data
struct Collection {
	int  elno;

	int *elements;
};

void AddToCollection(Collection &col, int element) {
	
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };

	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for(int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;
	return 0;
}