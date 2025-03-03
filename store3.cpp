#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;

int main(){
	// Phase 1 change from menu.cpp the fixed menu function to a 
	// function that takes in the array of fruits
	string fruits[] = {"Mango" , "", "that"};
	// The program sells a single fruit to customers until they want
	// to stop, count how many fruits are being sold (only one item... ++)
	double prices[] = {0.5, 1.4, 54.1};
	size_t fruitCount[3] = {0};

	// Practice challenges
	// - Sell more than 1 fruit to each customer
	// - Have tax, discount
	// - Print a detailed receipt (use stringstream to build the receipt)


	char start;
	int quantity, fruitOption;
	double subTotal, tax, total, totalMoney = 0;
	
	cout << "Welcome to the Store" << endl;
	cout << "Press y to start " << endl;
	cin >> start;
	while (start == 'y' || start == 'Y'){
		subTotal = 0;
		do{
			cout << "Fruits" << endl;
			cout << "1. Pears" << endl;
			cout << "2. Apples" << endl;
			cout << "0. No more" << endl;
			cout << "Your choice: ";
			cin >> fruitOption;
			if (fruitOption == 1){
				cout << "How many: ";
				cin >> quantity;
				subTotal += quantity * 0.45;
			}else if (fruitOption == 2){
				cout << "How many: ";
				cin >> quantity;
				subTotal += quantity * 0.3;
			}else if (fruitOption == 0){
				cout << "Thanks for your options" << endl;
			}else{
				cout << fruitOption << " is invalid" << endl;
			}
		}while (fruitOption != 0);
		tax = subTotal * 0.05;
		total = subTotal + tax;
		cout << "Sub Total is " << setw(10) << fixed << setprecision(2) << subTotal << endl;
		cout << "Tax is       " << setw(10) << fixed << setprecision(2) << tax << endl;
		cout << "Total is     " << setw(10) << fixed << setprecision(2) << total << endl;
		totalMoney += total;
		cout << "Continue selling (y to continue): ";
		cin >> start;
	}
	cout << "You should have in your money box: " << fixed << setprecision(2) << totalMoney << endl;
	return 0;
}
