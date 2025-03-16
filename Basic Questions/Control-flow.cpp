#include <iostream>
using namespace std;

int main() {
    int a, b, sum, product, diff; 
    
    cout << "Enter first number: ";
    cin >> a; 
    
    cout << "Enter second number: ";
    cin >> b; 
    
    sum = a + b; 
    product = a * b; 
    diff = a - b; 
    
    cout << "\nResults:\n";
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << diff << endl;
    
    return 0;
}