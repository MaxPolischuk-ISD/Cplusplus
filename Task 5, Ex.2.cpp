#include <iostream>

using namespace std;

int main() {
    int numbers = 10;
    float sumOfSquares = 0;

    for (int i = 1; i <= numbers; i++) {
        int num1;
        cout << "Enter a natural number " << i << " ";
        cin >> num1;

        if (num1 <= 0) {
            cout << "Please enter a natural number." << endl;
            i--;
            continue;
        }

        float square = static_cast<float>(num1 * num1);
        sumOfSquares += square;
    }

    float meanOfSquares = sumOfSquares / numbers;

    cout << "Arithmetic mean of the squares: " << meanOfSquares << endl;

    return 0;
}
