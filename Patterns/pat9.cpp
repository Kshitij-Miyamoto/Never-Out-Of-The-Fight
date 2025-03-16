#include<iostream>
using namespace std ; 
int main()
{
    int n ; 
    int i = 1 ;
    cout << "Enter the number : " << endl ; 
    cin >> n ; 
    
    while( i <= n){
        int j = 1;
        while( j <= n-i){
            cout << " ";
            j++;
        }
        int k = 1;
        while( k <= i){
            cout << "* " ;
            k++;
        }
     cout << endl ; 
     i++;
    }
return 0; 
}