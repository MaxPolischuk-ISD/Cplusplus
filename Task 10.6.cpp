#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int find(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    srand(time(0));
    const int size = 10;
    int numbers[size];

    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 10;
        cout << numbers[i] << " ";
    }
    cout << endl;

    int zeroIndex = find(numbers, size);
    if (zeroIndex != -1) {
        cout << "Номер першого нульового елемента: " << zeroIndex << endl;
    } else {
        cout << "Масив не містить нульових елементів" << endl;
    }

    return 0;
}
