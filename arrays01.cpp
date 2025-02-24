#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	const int N = 5
	int data[N] = {1,4,7,2,9};

	int otherData[] = {1,3,1,3,1,1,1,1};

	int thisOne[10];

	// calculate the average of the data in the array
	

	double sum = 0;
	for (int i=0; i<N; i++)
		sum += data[i];
		
	double average = sum / N;
	cout << average << endl;

	return 0;
}
