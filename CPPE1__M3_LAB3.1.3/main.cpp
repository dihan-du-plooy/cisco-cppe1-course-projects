/*
Objective:
Find the smallest element in the vector without using indexing (using brackets). Use as many pointers as you like:
*/

#include <iostream>
using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
    int *p1, *p2;
    p1 = &vector[0];
    p2 = &vector[0];
    for (int i = 0; i < n; i++) {
        p2++;
        if (p2 > p1) {
            p1++;
        }
        else
            continue;
    }
    cout << p1;
	return 0;
}