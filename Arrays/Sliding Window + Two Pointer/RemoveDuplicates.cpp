#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;  // Edge case: empty array

    int i = 0;  // Slow pointer (tracks unique elements)

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {  // Found a new unique element
            i++;  
            nums[i] = nums[j];  // Move it next to the last unique element
        }
    }
    
    return i + 1;  // Unique count (length of modified array)
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int newSize = removeDuplicates(nums, n);

    // Print the modified array
    cout << "Unique elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
