#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter the first integer number: ";
    cin >> num1;
    
    cout << "Enter the second integer number: ";
    cin >> num2;
    
    float result1 = 1.0 / num1;
    float result2 = 1.0 / num2;
    
    float epsilon = 0.000001;

    if (fabs(result1 - result2) < epsilon) {
        cout << "Results are equal (by " << epsilon << " epsilon)" << endl;
    } else {
        cout << "Results are not equal" << endl;
    }

    return 0;
}
