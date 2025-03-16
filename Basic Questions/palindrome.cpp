#include <iostream>
using namespace std;

int main() {
    int num = 121; 
    int originalNum = num;  // Store the original number
    int reversed = 0;

    // Reverse the number
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed Number: " << reversed << endl;

    // Check if the number is a palindrome
    if (originalNum == reversed) {
        cout << "The number is a palindrome" << endl;
    } else {
        cout << "The number isn't a palindrome" << endl;
    }

    return 0; 
}