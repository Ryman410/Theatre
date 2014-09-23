#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int total = 0;
	int userChoice;
	int prices[15];

	do {
		cout << "Enter the number of your choice: \n";
		cout << "1. Show available seating\n";
		cout << "2. Purchase tickets\n";
		cout << "3. Check availability by row\n";
		cout << "4. Check total availability\n";
		cout << "5. Check total sales\n";
		cout << "6. Quit";
	} while (userChoice != 6);


	return 0;
}