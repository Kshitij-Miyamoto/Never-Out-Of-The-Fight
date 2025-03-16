#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        // Printing leading spaces
        int j = 1;
        while (j <= n - i) {
            cout << "  "; // Two spaces for better alignment
            j++;
        }

        // Printing stars with increasing gaps
        int k = 1;
        while (k <= i) {
            cout << "*";
            if (k < i) {  // Add spaces between stars except after the last star
                cout << "   "; // Three spaces for increasing gaps
            }
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}