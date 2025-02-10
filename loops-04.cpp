#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;

int main() {
    srand(time(NULL));
    const int MAX = 5;
    int even = 0;
    while (true) {
        int number = rand() % 10000;
        if (number % 2 == 0) {
            cout << number << endl;
            even++;
        }
        if (even == MAX) {
            break;
        }
    }
    return 0;
}