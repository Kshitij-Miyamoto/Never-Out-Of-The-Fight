#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = {1, 2, 3, 4} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 

    int ans[100] ; 

    for(int i = 0 ; i <= n-1 ; i++){
       int  product = 1 ;
       for(int j = 0 ; j <= n-1 ; j++){
        if( i != j){
            product = product*arr[j] ; 
        }
       }
        ans[i] = product ; 
    }
    cout << " The new array is : " << endl; 
     for(int i = 0 ; i < n ; i++){
        cout << ans[i] <<endl ; 
     }
return 0; 
}