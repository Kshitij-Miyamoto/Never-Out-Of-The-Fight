#include <iostream>
using namespace std;

int reverse_number(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = 12345;
    cout << reverse_number(num) << endl;  // Output: 54321
    return 0;
}
