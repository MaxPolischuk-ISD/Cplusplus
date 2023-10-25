#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter the day of the week: ";
    cin >> day;

    if (day == 1) {
        cout << "Monday: Math, English, Physics" << endl;
    } else {
        cout << "Error! You need to enter 1!" << endl;
    }

    return 0;
}
