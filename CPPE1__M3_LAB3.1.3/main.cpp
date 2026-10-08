/*
Objective:
Find the smallest element in the vector without using indexing (using brackets). Use as many pointers as you like:
*/

#include <iostream>
using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int *p1, *p2;
    p1 = vector;
    p2 = p1;
	int n = sizeof vector / sizeof *p1;
      //change how you assign p or how define i 
    for (int i = 0; i < n; i++) {
        if (*p2 < *p1) 
            p1 = p2; 
        p2++;
    }
    cout << *p1;
	return 0;
}