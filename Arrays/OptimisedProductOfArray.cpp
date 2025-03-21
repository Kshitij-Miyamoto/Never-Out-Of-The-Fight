#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = {1, 2, 3, 4} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int ans[100] ; 
// 0(n) time complexity 
    int prefix = 1 ; 
    for(int i = 0 ; i < n ; i++){
       ans[i] = prefix; 
       prefix = prefix*arr[i] ; 
    }
    int suffix = 1 ; 
    for(int i = n-1 ; i >= 0 ; i--){
        ans[i] = ans[i]*suffix ; 
        suffix = suffix*arr[i]; 
    }
    cout << "The new array is : " ;
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " " ; 
    }
return 0; 
}