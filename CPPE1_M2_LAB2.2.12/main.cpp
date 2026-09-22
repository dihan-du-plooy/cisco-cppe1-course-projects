#include <iostream>
#include <limits>
using namespace std;

int main(void) {
	int preSpace = 40, addSpace = 1, inSpace = 1, height, amount = 3;
	cout <<  "Hi User. Please pass a pyramid height less than 22 and bigger than 1: ";\
	while(true) {
		if(!(cin >> height)) {
			cout << "That's not a valid intiger number. Please pass a valid number: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (height < 2 || height > 21)
			cout << "That number is out of bounds. Please pass a number within specified bounds: ";
		else
			break;
	}
	//first row
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j < preSpace; j++)
			cout << ' ';
		cout << '*';
	}
	cout << endl;
	preSpace -= 2;

	//middle section
	for (int i = 0; i < (height - 2); i++) {					//for each row
		for (int j = 0; j < (preSpace + addSpace); j++)			//for each first pyramid
			cout << ' ';
		cout << '*';
		for (int k = 0; k < inSpace; k++)						
			cout << ' ';
		cout << '*';
		for (int j = 0; j < (amount - 1); j++) {				//for each 2 pyramids after 	
			for (int k = 0; k < preSpace; k++)					
				cout << ' ';
			cout << '*';
			for (int l = 0; l < inSpace; l++)					
				cout << ' ';
			cout << '*';
		}
	cout << endl;
	inSpace += 2;
	preSpace -= 2;
	addSpace += 1;
	}

	//last line
	for (int i = 0; i < (preSpace + addSpace); i++)			//for first pyramids
		cout << ' ';
	cout << '*';
	for (int j = 0; j < inSpace; j++)
		cout << '*';
	cout << '*';
	for (int i = 0; i < (amount - 1); i++) {				//for last 2 pyramids
		for (int j = 0; j < preSpace; j++)
			cout << ' ';
		cout << '*';
		for (int j = 0; j < inSpace; j++)
			cout << '*';
		cout << '*';
	}
	return 0;
}