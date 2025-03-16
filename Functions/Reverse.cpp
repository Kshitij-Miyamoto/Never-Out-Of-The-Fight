#include <iostream>
using namespace std;

int reverse(int num, int rev = 0) {
    if (num == 0) {
        return rev;  // Base case: when num becomes 0, return the reversed number
    }
    rev = rev * 10 + num % 10;  // Add the last digit to the reversed number
    return reverse(num / 10, rev);  // Recursive call with the remaining number
}

int main() {
    int number = 12345;
    int reversedNumber = reverse(number);
    cout << "The reversed number is: " << reversedNumber << endl;
    return 0;
}