#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
char seats[30][15];

void drawSeating();//declaring seat chart function
void initSeating();

int main() {
	int total = 0;
	int userChoice;
	int prices[15];

	initSeating();
	drawSeating();

	/*
	do {
		cout << "Enter the number of your choice: \n";
		cout << "1. Show available seating\n";
		cout << "2. Purchase tickets\n";
		cout << "3. Check availability by row\n";
		cout << "4. Check total availability\n";
		cout << "5. Check total sales\n";
		cout << "6. Quit";
	} while (userChoice != 6);
	*/

	return 0;


}

void initSeating() {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 15; j++) {
			seats[i][j] = '*';
		}
	}
}


void drawSeating() {
	
	for (int i = 0; i < 10; i++) {
		cout << " ";
	}
	for (int k = 0; k < 3; k++) {

		for (int i = 0; i < 10; i++) {
			
			if (i == 9) {
				cout << 0;
			}
			else {
				cout << i + 1;
			}
		}
	}
	cout << endl;

	for (int i = 1; i < 16; i++) {
		cout << "Row " << i;
		if (i < 10) {
			for (int j = 0; j < 5; j++) {
				cout << " ";
			}
		}
		else {
			for (int q = 0; q < 4; q++) {
				cout << " ";
			}
		}
		for (int k = 0; k < 30; k++) {
			cout << seats[i-1][k];
		} 
		cout << endl;
	}
}