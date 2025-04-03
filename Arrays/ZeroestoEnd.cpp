#include <iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
    int j = 0; // Position to place non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;  // Increment index for next non-zero element
        }
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;  // Read the size of the array

    int arr[N];  // Declare array of size N
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  // Read input elements
    }

    pushZerosToEnd(arr, N);
    return 0;
}