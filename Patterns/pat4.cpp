#include<iostream>
using namespace std ; 
int main()
{
    int i = 1; 
    
    int n ;
    cout << "Enter the number of rows : " << endl ; 

    cin >> n ;


    while(i <= n){
        int j = 1 ;
        while(j <= n){
            cout << n-j+1 << " " ; 
            j = j+1 ;
        }
        cout << endl ; 
        i = i+1 ;
    }

return 0; 
}