#include<iostream>
using namespace std ; 
int main()
{
    int n ;
    cout << "Enter the number of rows : " << endl ; 
    cin >> n ; 
    int i = 1; 
    while( i <= n){
        int j = 1 ; 
        while(j <= n-i){
            cout << " ";
            cout << endl ; 
            j++;
        }
        int k = 1;
        while( k <= 2*i-1){
            cout << "*" ;
            cout << endl ; 
            k++;
        }
        int l = 1;
        while(l <= n-i){
            cout << " ";
            cout << endl ; 
            l++;
        }
        cout << " " ; 
        i++;
    }
return 0; 
}