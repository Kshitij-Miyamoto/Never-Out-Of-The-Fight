#include <iostream>
using namespace std;

void factorial(int a) {
    int fact = 1, i = 1;  // Initialize fact to 1
    while (i <= a) {
        fact = fact * i;  // Multiply fact by i
        i++;  // Increment i
    }
    cout << "The factorial of " << a << " is: " << fact << endl;  // Print the result
}

int main() {
    factorial(5);  // Call the factorial function with argument 5
    return 0;
}