#include <iostream>
using namespace std;

void swapNum(int &a, int &b) {  // Pass-by-reference
    int temp = a;
    a = b;
    b = temp;
    
    cout << "The swapped values are: a = " << a << ", b = " << b << endl;
}

int main() {
    int a = 5, b = 10;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    swapNum(a, b);  // ✅ Call the function without assigning it to a variable
    
    return 0;
}
