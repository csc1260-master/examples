#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;


int ProductsMenu();

int main(){
	int n;
	cout << "n = ";
	cin >> n;
	if (cin.fail()){
		cin.clear();
		cin.ignore(255, '\n');
		cerr << "Invalid Input... goodbye";
		cin >> n;
	}
	cout << n << endl;
	return 0;

}

int ProductsMenu(){
	int selection;
	do {

	}while (selection < 0 || selection > 5);
}
