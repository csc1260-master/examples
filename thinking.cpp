#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

	int a, b, c;
	cout << "Three numbers: ";
	cin >> a >> b >> c;

	if (a == b)
		cout << "Blue" << endl;
		cout << "Green" << endl;

	if (b == 1){
		cout << "Yellow" << endl;
	}else{
		cout << "Pink" << endl;
	}
	if (a = c){
		cout << "Tomato" << endl;
		cout << "Yes it is a color :(" << endl;
	}
	cout << "White" << endl;
	return 0;
}
