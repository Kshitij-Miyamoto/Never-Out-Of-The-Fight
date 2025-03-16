#include <iostream>
using namespace std;

void MoveZeroes(int arr[], int n) {
    int j = 0; // Position to place non-zero elements

    // Move all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); // Swap non-zero element with zero
            j++; 
        }
    }
}

int main() {
    int arr[] = {1, 0, 3, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    MoveZeroes(arr, n);

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}