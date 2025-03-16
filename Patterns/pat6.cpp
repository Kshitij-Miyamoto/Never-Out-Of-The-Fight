#include<iostream>
using namespace std ; 
int main()
{
    int i = 1;
    int n ;
    cout << "Enter the number of rows : " << endl ;
    cin >> n ; 
    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << "*" << " ";
            j++;
        }
        cout << endl ; 
        i++;
    }
return 0; 
}