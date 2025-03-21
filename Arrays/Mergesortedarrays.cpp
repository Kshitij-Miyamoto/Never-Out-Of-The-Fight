#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1; // Pointer for the last element of nums1
    int j = n - 1; // Pointer for the last element of nums2
    int k = m + n - 1; // Pointer for the last position of nums1 (where we will insert elements)

    // Merge in reverse order to avoid overwriting elements of nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If any elements left in nums2, place them in nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    // If any elements left in nums1, they are already in the correct position
}

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0};  // Size of nums1 is 6 (m + n)
    int m = 3;  // 3 elements in nums1
    int nums2[3] = {2, 5, 6};  // Size of nums2 is 3
    int n = 3;  // 3 elements in nums2

    // Call merge function
    merge(nums1, m, nums2, n);

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < m + n; ++i) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
