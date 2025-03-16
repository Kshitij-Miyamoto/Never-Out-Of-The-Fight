#include <iostream>
using namespace std;

int MaxSum(int arr[], int n, int k) {
    int Maxsum = 0;
    int WindowSum = 0;

    // Compute sum of the first window
    for (int i = 0; i < k; i++) {
        WindowSum += arr[i];
    }

    Maxsum = WindowSum;

    // Sliding window approach
    for (int j = k; j < n; j++) {
        WindowSum = WindowSum + arr[j] - arr[j - k];  // Add new, remove old
        Maxsum = max(WindowSum, Maxsum);
    }

    return Maxsum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Maximum sum of subarray of size " << k << ": " << MaxSum(arr, n, k) << endl;
    return 0;
}
