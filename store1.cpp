#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::setw;
using std::fixed;
using std::right;
using std::string;

int main(){
	double price, subTotal, tax, discount, total;
	int quantity;
	string state;
	cout << "Welcome to my store!" << endl;
	cout << "You can only buy ONE item but as many as you want!" << endl << endl;
	cout << "What is the price: ";
	cin >> price;
	cout << "How many are you taking: ";
	cin >> quantity;
	subTotal = price * quantity;
	if (subTotal > 100){
		discount = subTotal * 0.1;
	}else{
		discount = 0;
	}
	subTotal -= discount;
	cout << "What state are we in: ";
	cin >> state;
	if (state == "OR")
		tax = 0;
	else
		tax = subTotal * 0.1;
	total = subTotal + tax;
	cout << "Sub Total = $" << setw(8) << right << setprecision(2) << fixed << subTotal << endl;
	cout << "Tax       = $" << setw(8) << right << setprecision(2) << fixed << tax << endl;
	cout << "Total     = $" << setw(8) << right << setprecision(2) << fixed << total << endl;

	return 0;
}

