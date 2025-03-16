#include<iostream>
using namespace std ; 
int main()
{
    int i = 1 ; 
    int n = 5;
    while(i <= n){
        int j = 1 ; 
        while(j<=i){
            cout << (" ");
            j = j+2 ; 
        }
        int k = 5;
        while(k >= i){
            cout<<(" * ");
            k = k-1;
        }
        int l = 4 ; 
        while(l <=1){
            cout<<(" ");
            l = l-1 ;
        }
        cout << endl ; 
        i++;
    }
return 0; 
}