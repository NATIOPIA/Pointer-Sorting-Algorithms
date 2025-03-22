#include <iostream>
using namespace std;

// Function to partition the array
int partition(int* arr, int low, int high) {
    int pivot = *(arr + high); // Choose the last element as pivot
    int i = low - 1; // Pointer for the smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (*(arr + j) <= pivot) {
            i++; // Increment index of smaller element
            swap(*(arr + i), *(arr + j)); // Swap
        }
    }
    swap(*(arr + i + 1), *(arr + high)); // Swap pivot to correct position
    return i + 1; // Return the partitioning index
}

// Quick Sort function
void quickSort(int* arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Main function to execute the Quick Sort algorithm
int main() {
    const int size = 10;
    int arr[size] = {64, 34, 25, 12, 22, 11, 90, 5, 3, 1};

    cout << "Original Array: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Sorted Array (Quick Sort): ";
    printArray(arr, size);

    return 0;
}