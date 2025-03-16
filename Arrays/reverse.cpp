#include <iostream>
using namespace std;

int main() { 
    int arr[5] = {10, 20, 30, 40, 50};

    // Loop to print the array in reverse order
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}