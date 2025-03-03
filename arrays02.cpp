#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int n;
	cin >> n;

	unsigned int diceCount[n] = {0};

	for (int i=0; i<10000; i++)
		diceCount[i % n]++;

	for (int i=0; i<n; i++)
		cout << diceCount[i] << endl;


	/*
	 *
	 * ----
	 * ------------
	 * -----
	 */

	return 0;
}

int LinearSearch(int data[], size_t size, int key, size_t pos = 0);
