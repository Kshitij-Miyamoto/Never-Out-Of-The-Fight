#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid overflow

        // If target is found at mid
        if (arr[mid] == target) {
            return mid; // Return the index of the target
        }

        // If target is smaller, ignore the right half
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // If target is larger, ignore the left half
        else {
            low = mid + 1;
        }
    }

    // If target is not found
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
