#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*
 * Input.
 * n
 * Output.
 * 1
 * 1 2
 * 1 2 3
 * ...
 * 1 2 3 ... n
 *
 */

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << (j + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
