#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit positive number: ";
    cin >> N;

    if (N >= 100 && N <= 999) {
        int digit1 = N / 100;
        int digit2 = (N / 10) % 10;
        int digit3 = N % 10;

        int count = 0;
        
        if (digit1 < 5) {
            count++;
        }
        if (digit2 < 5) {
            count++;
        }
        if (digit3 < 5) {
            count++;
        }

        cout << "Number of digits less than 5: " << count << endl;
    } else {
        cout << "Error!" << endl;
    }

    return 0;
}
