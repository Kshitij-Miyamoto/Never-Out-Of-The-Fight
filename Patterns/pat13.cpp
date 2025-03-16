#include<iostream>
using namespace std ; 
int main()
{
    int n = 5;
    int i =1 ; 
    while( i <= n){
        int j = 1;
        while(j <= i-1){
            cout << " ";
            j++;
        }
        int k = 1; 
        while( k <= 3*n-2*i-4){
            cout << "*" ;
            k++;
        }
        int l = 1;
        while( l <= i-1){
            cout <<(" ");
            l++;
        }
        cout<<endl ; 
        i++ ;
    }
return 0; 
}