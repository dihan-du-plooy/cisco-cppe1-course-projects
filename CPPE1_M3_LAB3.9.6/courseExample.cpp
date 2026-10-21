#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Collection {
	int  elno;
	int *elements;
};
void AddToCollection(Collection &col, int element) {
	if(col.elno == 0) { 		// collection is empty
		col.elno = 1;		// set elno to 1
		col.elements = new int[1];	// allocate space for 1 element 
		col.elements[0] = element;	// store the element
	} else {		// collection is not empty
		// allocate space for elno+1 elements
		int *t = new int[col.elno + 1];
		// copy elements from elements[] to t[]
		for(int i = 0; i < col.elno; i++)
			t[i] = col.elements[i];
		// put new element at the end of t[]
		t[col.elno++] = element;
		// free previously used space
		delete[] col.elements;
		// use newly allocated space
		col.elements = t;
	}
}
void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++) cout << col.elements[i] << " ";
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