#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    
    // Increasing pattern
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

  // Start from `n-1` for decreasing pattern
   i = n-1 ;
    // Decreasing pattern
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}