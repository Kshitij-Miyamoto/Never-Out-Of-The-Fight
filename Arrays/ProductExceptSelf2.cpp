#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = {1, 2, 3, 4, 5} ;
    int n = sizeof(arr)/sizeof(int) ;
    int l[100] ;
    l[0] = 1 ;
    for(int i = 1 ; i <= n-1 ; i++){
        l[i] = l[i-1]*arr[i-1] ;
    }
    int r[100] ;
    r[n-1] = 1 ;
    for(int i = n-2 ; i >= 0 ; i--){
        r[i] = r[i+1]*arr[i+1];
    }
    int answer[100] ;
    for(int i = 0 ; i < n ; i++){
        answer[i] = l[i]*r[i] ; 
    }
     for(int i = 0 ; i < n ; i++){
        cout << answer[i] << " " ; 
    }
return 0; 
}