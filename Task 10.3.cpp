#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swapMinMax(int arr[], int size) {
    int max_index = 0, min_index = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
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

    swapMinMax(numbers, size);

    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
