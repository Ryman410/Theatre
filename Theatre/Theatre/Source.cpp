#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
int total = 0;
int[] readPrices();
int main() {
	
	int userChoice;
	int prices[15];

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
		case 1:
			drawSeating();
			break;
		case 2:
			purchaseTickets();
			break;
		case 3:
			checkRowAvail();
			break;
		case 4:
			checkTotalAvail();
			break;
		case 5:
			cout << "Total sales: $" << total << endl;
			break;
		case 6:
			break;
		default:
			cout << "Unsupported input. Please try again.\n";
		}
	} while (userChoice != 6);


	return 0;
}

int readPrices() {

}