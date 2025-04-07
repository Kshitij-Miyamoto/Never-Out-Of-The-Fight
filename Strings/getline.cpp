#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin >> ws, name );  // reads entire line including spaces
    cout << "You entered: " << name << endl;
    return 0;
}