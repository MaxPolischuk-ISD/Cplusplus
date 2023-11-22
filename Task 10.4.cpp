#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int count(int arr[], int size, int A) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > A) {
            count++;
        }
    }

    return count;
}

int main() {
    srand(time(0));
    const int size = 10;
    int numbers[size];

    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 100;
        cout << numbers[i] << " ";
    }
    cout << endl;

    int A;
    cout << "Введіть число A: ";
    cin >> A;

    int countResult = count(numbers, size, A);
    cout << "Кількість елементів більших за " << A << ": " << countResult << endl;

    return 0;
}
