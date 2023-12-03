#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int* arr, int size, int index = 0) {
    if (index < size) {
        cout << setw(4) << arr[index];
        printArray(arr, size, index + 1);
    }
    
    cout << '\n';
}
template <typename T>
void printArrayT(const  T arr[], int size, int index = 0) {
    if (index < size) {
        cout << setw(4) << arr[index];
        printArrayT(arr, size, index + 1);
    }
    cout << '\n';
}

void fillArray(int* arr, int size, int index = 0) {
    if (index < size) {
        cout << "a[" << index << "] = ";
        cin >> arr[index];
        fillArray(arr, size, index + 1);
    }
}
template <typename T>
void fillArrayT(T arr[], int size, int index = 0) {
    if (index < size) {
        cout << "a[" << index << "] = ";
        cin >> arr[index];
        fillArrayT(arr, size, index + 1);
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
template <typename T>
bool isNonDecreasingRecursiveT(const T arr[], int size, int index = 0) {
    if (index < size - 1) {
        if (arr[index] > arr[index + 1]) {
            return false;
        }
        return isNonDecreasingRecursiveT(arr, size, index + 1);
    }
    return true;
}

int main() {
    const int size = 5;
    int arr[size];
    const int sizeT = 5;
    int arrT[sizeT];
    fillArray(arr, size);
    printArray(arr, size);
    fillArrayT(arrT, sizeT);
    printArrayT(arrT, sizeT);

    if (isNonDecreasingRecursive(arr, size)) {
        cout << '\n';
        cout << "in Array: True" << endl;
    }
    else {
        cout << "in Array: False" << endl;
    }
    if (isNonDecreasingRecursiveT(arrT, sizeT)) {
        cout << '\n';
        cout << "in Array <T>: True" << endl;
    }
    else {
        cout << "in Array <T>: False" << endl;
    }


    return 0;
}