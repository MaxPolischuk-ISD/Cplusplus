#include <iostream>

using namespace std;

int main() {
    int m = 12;
    const int array_size = 10;
    int array[m];

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted in ascending order: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted in descending order: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
