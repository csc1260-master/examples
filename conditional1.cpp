#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::rand;

int main(){
	const int FACES = 6;
	srand(time(NULL));
	int die1 = rand() % FACES + 1;
	int die2 = rand() % FACES + 1;
	int sumDie = die1 + die2;

	double bet, prize = 0;
	cout << "How much you wanna bet: ";
	cin >> bet;

	cout << "Your roll is: " << sumDie << endl;
	if (sumDie == 7){
		cout << "You have won a big prize";
		prize = 2 * bet;
	}

	cout << "Your prize is: " << prize << endl;


	return 0;
}
