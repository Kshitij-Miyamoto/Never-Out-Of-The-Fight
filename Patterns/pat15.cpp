#include<iostream>
using namespace std ; 
int main()
{
    int n = 5; 
    int i = 1 ;
    while( i <= n){
        int j = 1 ; 
        while( j <= n-i){
            cout << " ";
            j++;
        }
        int k = 1 ;
        while( k <= i){
            cout <<  "*" ;
            if( k < i){
                cout << "!" ; 
            }
            k++;
        }
      cout << endl ; 
      i++;
    }
return 0; 
}