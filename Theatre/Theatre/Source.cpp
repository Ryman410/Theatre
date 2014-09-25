#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

char seats[30][15];

void drawSeating();//declaring seat chart function
void initSeating();


int total = 0;
int readPrices();

int main() {
	
	int userChoice;
	int prices[15];


	initSeating();
	drawSeating();

	

	// initialise seating array
	initSeating();
	
	// find prices
	

	do {
		// draw menu
		cout << "Enter the number of your choice: \n";
		cout << "1. Show available seating\n";
		cout << "2. Purchase tickets\n";
		cout << "3. Check availability by row\n";
		cout << "4. Check total availability\n";
		cout << "5. Check total sales\n";
		cout << "6. Quit";
		// check user input
		cin >> userChoice;
		switch (userChoice) {
		case 1: // draw chart displaying seating
			drawSeating();
			break;
		case 2: // purchase tickets
			purchaseTickets();
			break;
		case 3: // check availability of seating by row
			checkRowAvail();
			break;
		case 4: //check availibility of seating in entirety
			checkTotalAvail();
			break;
		case 5: // display total sales
			cout << "Total sales: $" << total << endl;
			break;
		case 6: // quit
			break;
		default: // invalid input
			cout << "Unsupported input. Please try again.\n";
		}
	} while (userChoice != 6);
	

	return 0;



}

// initialize array for seating chart to empty (*)
void initSeating() {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 15; j++) {
			seats[i][j] = '*';
		}
	}
}

// draw diagram of seating
void drawSeating() {
	
	// begin with spaces
	for (int i = 0; i < 10; i++) {
		cout << " ";
	}

	// number columns
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

	// number rows, and print out seating chart
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

// get prices from user or from file
int readPrices() {


}