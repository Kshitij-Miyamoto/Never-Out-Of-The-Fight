#include <iostream>
using namespace std;

int main() {
    int n;  // Size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare an array of size 'n'

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Taking input for each element
    }

    // Displaying the array
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}