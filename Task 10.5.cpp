#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int find(int arr[], int size) {
    sort(arr, arr + size);
    return arr[size - 2];
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

    int secondLargest = find(numbers, size);
    cout << "Другий за величиною елемент: " << secondLargest << endl;

    return 0;
}
