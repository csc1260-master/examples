#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;

int main(){
	
	char start;
	int quantity, fruitOption;
	double subTotal, totalMoney = 0;
	
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
		cout << "Sub Total is " << setw(10) << fixed << setprecision(2) << subTotal << endl;
		cout << "Tax is       " << setw(10) << fixed << setprecision(2) << subTotal * 0.05 << endl;
		cout << "Total is     " << setw(10) << fixed << setprecision(2) << subTotal * 1.05 << endl;
		totalMoney += subTotal * 1.05;
	}
	cout << "You should have in your money box: " << totalMoney << endl;
	return 0;
}
