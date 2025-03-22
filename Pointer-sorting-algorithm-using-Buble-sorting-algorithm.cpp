#include <iostream>
using namespace std;

// Bubble Sort using pointers
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare elements using pointers
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap if elements are in the wrong order
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}

// Utility function to print an array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Main function to execute the Bubble Sort algorithm
int main() {
    const int size = 10;
    int arr[size] = {64, 34, 25, 12, 22, 11, 90, 5, 3, 1};

    cout << "Original Array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted Array (Bubble Sort): ";
    printArray(arr, size);

    return 0;
}