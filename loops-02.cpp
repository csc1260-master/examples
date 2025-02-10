#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::rand;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(time(NULL));
    int n1 = 0, n2 = 0, n3 = 0;
    int number, count = 0;
    const int MAX = 100;

    while (count < MAX && (n1 < MAX / 3 && n2 < MAX / 3 && n3 < MAX / 3)) {
        number = rand() % 3;
        if (number == 0) {
            n1++;

        }else if (number == 1) {
            n2++;
        }else if (number == 2) {
            n3++;
        }
        count++;
    }
    cout << "Count = " << count << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.