#include <iostream>
#include <algorithm>  // For std::sort
using namespace std;

int longestsubsequence(int nums[], int n) {
    if (n == 0) return 0;  // Check if the array is empty

    // Sort the array
    sort(nums, nums + n); 

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1] + 1) {  // Consecutive number
            currentLength++;
        } else if (nums[i] != nums[i - 1]) {  // If not consecutive, reset sequence
            currentLength = 1;
        }

        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
}

int main() {
    int nums[] = {1, 4, 5, 6, 2, 3, 7};
    int n = sizeof(nums) / sizeof(int);  // Calculate the size of the array

    cout << "Longest Consecutive Subsequence Length: " << longestsubsequence(nums, n) << endl;

    return 0;
}