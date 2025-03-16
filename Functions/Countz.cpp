#include <iostream>
using namespace std;

int countZeros(int a) {
    // Base case: if the input itself is 0, return 1
    if (a == 0) {
        return 1;
    }
    // Base case: single-digit non-zero number has no zeros
    if (a < 10) {
        return 0;
    }
    // Check the last digit and recurse for remaining digits
    int lastDigit = a % 10;
    int zeros = (lastDigit == 0) ? 1 : 0;
    return zeros + countZeros(a / 10);
}

int main() {
    cout << countZeros(100) << endl;  // Output: 2
    cout << countZeros(10500) << endl;  // Output: 1
    cout << countZeros(0) << endl;    // Output: 1
    return 0;
}