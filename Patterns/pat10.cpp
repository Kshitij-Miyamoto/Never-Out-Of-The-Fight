#include<iostream>
using namespace std ; 
int main()
{
    int n ; 
    int i = 1 ;
    cout << "Enter the number of rows : " << endl ; 
    cin >> n ; 
    
    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << " ";
            j++;
        }
        int k = 1;
        while( k <= n-i+1){
            cout << "*" ;
            k++;
        }
     cout << endl ; 
     i++;
    }
return 0; 
}