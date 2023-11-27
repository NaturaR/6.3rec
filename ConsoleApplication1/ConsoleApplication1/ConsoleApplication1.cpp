#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int* arr, int size, int index = 0) {
    if (index < size) {
        cout << setw(4) << arr[index];
        printArray(arr, size, index + 1);
    }
}

void fillArray(int* arr, int size, int index = 0) {
    if (index < size) {
        cout << "a[" << index << "] = ";
        cin >> arr[index];
        fillArray(arr, size, index + 1);
    }
}

bool isNonDecreasingRecursive(int arr[], int size, int index = 0) {
    if (index < size - 1) {
        if (arr[index] > arr[index + 1]) {
            return false;
        }
        return isNonDecreasingRecursive(arr, size, index + 1);
    }
    return true;
}

int main() {
    const int size = 5;
    int arr[size];

    fillArray(arr, size);
    printArray(arr, size);

    if (isNonDecreasingRecursive(arr, size)) {
        cout << '\n';
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}