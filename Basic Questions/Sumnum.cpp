#include <iostream>
using namespace std;

int main() {
    int num , sum = 0, i ; 
    cout<< "Enter a number  : " << endl ; 
    cin >> num ; 
    while( num != 0){
       i = num%10;
       sum = sum + i;
       num = num/10;
    }
    cout << "The sum of the digits is : "<< sum <<endl ; 
    return 0;
}