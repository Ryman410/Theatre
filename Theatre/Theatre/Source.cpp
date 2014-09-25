#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

void drawSeating(); //declaring seat chart function
void initSeating();
void readPrices();

// global variables instead of passing them to functions
int total = 0;
float prices[15];
char seats[30][15];

// main function
int main() {
	
	// stores user input for menu
	int userChoice;

	// initialise seating array
	initSeating();
	
	// get prices from file or user
	readPrices();

	do {
		// draw menu
		cout << "Menu\n";
		cout << "1. Show available seating\n";
		cout << "2. Purchase tickets\n";
		cout << "3. Check availability by row\n";
		cout << "4. Check total availability\n";
		cout << "5. Check total sales\n";
		cout << "6. Quit\n";
		cout << "Enter the number of your choice: ";
		// check user input & respond accordingly
		cin >> userChoice;
		switch (userChoice) {

		case 1: // draw chart displaying seating
			drawSeating();
			break;

		case 2: // purchase tickets
//			purchaseTickets();
			break;

		case 3: // check availability of seating by row
	//		checkRowAvail();
			break;

		case 4: //check availibility of seating in entirety
		//	checkTotalAvail();
			break;

		case 5: // display total sales
			cout << "Total sales: $" << total << endl;
			break;

		case 6: // quit
			break;

		default: // invalid input
			cout << "Unsupported input. Please try again.\n";
			break;

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
void readPrices() {

	ifstream inFile;
	ofstream outFile;
	// ask user if they would like to read from a file or enter prices manually
	int userChoice = 0;;
	do {
		// get user input
		cout << "Prices menu" << endl;
		cout << "1. Enter prices manually\n";
		cout << "2. Read prices from file\n";
		cout << "Enter the number of your choice: ";
		cin >> userChoice;
		// decide what to do based upon input
		switch (userChoice) {

		case 1: // enter prices manually
			for (int i = 0; i < 15; i++) {
				cout << "Enter the price for seating in Row " << i + 1 << ": ";
				cin >> prices[i];
				cout << endl;
			}

			// ask user if they would like to save these prices to a file
			do {
				cout << "Would you like to save these prices to a file?\n";
				cout << "1. Yes, save prices to file\n";
				cout << "2. No, do not save prices to file\n";
				cout << "Your choice: ";
				cin >> userChoice;

				// decide what to do based upon user input
				switch (userChoice) {
				case 1: // save prices to file
					outFile.open("prices.txt");
					for (int i = 0; i < 15; i++) {
						outFile << prices[i] << " ";
					}
					break;
				case 2: // do not save files
					break;
				default: // invalid input
					cout << "Invalid input, please try again.\n";
					break;
				}
			} while (userChoice != 1 && userChoice != 2);

			break;

		case 2: // read prices from file
			inFile.open("prices.txt");
			for (int i = 0; i < 15; i++) {
				inFile >> prices[i];
			}
			break;

		default: // invalid input
			cout << "Invalid input, please try again.\n";
			break;
		}

	} while (userChoice > 2 && userChoice < 1);

}