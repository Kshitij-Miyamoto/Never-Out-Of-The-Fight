#include <iostream>
using namespace std;

void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Runs n-1 times
        for (int j = 0; j < n - i - 1; j++) { // Moves the largest element to the end
            if (arr[j] > arr[j + 1]) { // Swap if out of order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {50, 40, 30, 20, 10}; // Unsorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    sorting(arr, n); // Sorting the array

    cout << "Sorted array: ";
    printArray(arr, n); // Print sorted array

    return 0;
}
