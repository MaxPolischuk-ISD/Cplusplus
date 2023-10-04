#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, h;

    cout << "Enter the range [a, b]: ";
    cin >> a >> b;

    if (a >= b) {
        cout << "Invalid range. 'a' should be less than 'b'." << endl;
        return 1;
    }

    cout << "Enter the step size 'h': ";
    cin >> h;

    if (h <= 0) {
        cout << "Invalid step size. 'h' should be greater than 0." << endl;
        return 1;
    }

    cout << "----------------" << endl;
    cout << ": X : Y :" << endl;
    cout << "----------------" << endl;

    for (float x = a; x <= b; x += h) {
        if (x <= 0 || sin(x) < 0) {
            cout << "Error - wrong numbers!" << endl;
            continue;
        }

        float y = pow(x, 0.25f) - 8 * sin(x);

        cout << ": " << x << " : " << y << " :" << endl;
    }

    cout << "----------------" << endl;

    return 0;
}
