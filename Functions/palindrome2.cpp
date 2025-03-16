#include <iostream>
using namespace std;

// Function to reverse the number recursively
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev; // Base case: return the reversed number
    return reverseNumber(n / 10, rev * 10 + (n % 10)); // Extract last digit, append to reversed
}

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    return n == reverseNumber(n); // Compare original with reversed
}

int main() {
    int num = 1121;
    
    if (isPalindrome(num))
        cout << num << " is a palindrome!" << endl;
    else
        cout << num << " is NOT a palindrome!" << endl;
    
    return 0;
}