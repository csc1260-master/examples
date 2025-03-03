#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

void PrintNames(string names[]){
	string names[] = {"Jimmy", "Jenny", "Jonny"};
	// doesnt work
}

int main(){
	string names[] = {"Jimmy", "Jenny", "Jonny"};
	int nameCount = sizeof(names) / sizeof(names[0]);

	for (size_t i=0; i<nameCount; i++)
		cout << names[i] << endl;



	return 0;
}

int LinearSearch(int data[], size_t size, int key, size_t pos = 0);
