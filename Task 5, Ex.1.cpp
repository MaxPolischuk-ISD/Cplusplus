#include <iostream>
#include <cmath>

using namespace std;

float calculating(float x) {
    float sinx = sin(x);
    float abs1 = abs(5 * x - 1.5);
    return pow(sinx, 5) + abs1;
}

int main() {
    for (int i = 0; i < 5; i++) {
        float x;
        cout << "Enter a value for x:";
        cin >> x;
        cout << "f("<< x <<")="<< calculating(x) << endl;
    }
    return 0;
}