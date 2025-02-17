#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;


int ProductsMenu();

int main(){

	int userSelection = ProductsMenu();
	double unitPrice = 0;
	int quantity;
	while (userSelection != 0){
		if (userSelection == 1){
			unitPrice = 0.75;
		}else if (userSelection == 2){
			unitPrice = 0.5;
		}else if (userSelection == 3){
			unitPrice = 1.00;
		}else if (userSelection == 4){
			unitPrice = 0.05;
		}else if (userSelection == 5){
			unitPrice = 3.5;
		}
		cout << "How many you want: ";
		cin >> quantity;
		cout << "Your total is: " << quantity * unitPrice << endl;
		cout << endl << endl;
		userSelection = ProductsMenu();
	}
	return 0;

}

int ProductsMenu(){
	int selection;
	do {
		cout << "1. Apple" << endl;
		cout << "2. Orange" << endl;
		cout << "3. Pineapple" << endl;
		cout << "4. Grapes " << endl;
		cout << "5. Mango" << endl;
		cout << "0. Exit" << endl;
		cin >> selection;
		if (cin.fail()){
			cin.clear();
			cin.ignore(255, '\n');
			cerr << "Invalid input... I want a number..." << endl;
			continue;
		}
		
		if (selection < 0 || selection > 5){
			cerr << "Dummy... can\'t you see the options!" << endl;
			cerr << "Try again... ;)" << endl << endl;
		}
	}while (selection < 0 || selection > 5);
	return selection;
}


