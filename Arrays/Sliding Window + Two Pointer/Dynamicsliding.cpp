#include <iostream>
#include <climits>  // Required for INT_MAX
using namespace std;

int minSubArrayLen(int X, int arr[], int n) {
    int left = 0, sum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        // Shrink window while sum is ≥ target
        while (sum >= X) {
            minLength = min(minLength, right - left + 1);
            sum -= arr[left]; 
            left++; 
        }
    }

    // If minLength was never updated, return 0 (no valid subarray found)
    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int X = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum subarray length: " << minSubArrayLen(X, arr, n) << endl;
    return 0;
}