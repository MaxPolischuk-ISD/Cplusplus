#include <iostream>
using namespace std;

int main(void) {
    int n;

    cout << "Enter a positive integer value greater than 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "The value entered is not legal. Please enter a positive integer greater than 1." << endl;
        return 1;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    return 0;
}
