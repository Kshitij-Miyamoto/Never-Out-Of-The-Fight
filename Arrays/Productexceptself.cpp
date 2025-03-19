#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = {1 ,2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int) ;
    int answer[100] ;

    for(int i = 0 ; i <n ; i++){
        int li = 1 ;
        for(int j = 0 ; j <= i-1 ; j++){
            li = li*arr[j];
        }
        int ri = 1 ;
        for(int j = i+1 ; j <= n-1 ; j++){
            ri = ri*arr[j] ;
        }
        answer[i] = li*ri ;
    }
    for(int i = 0 ; i < n ; i++){
        cout << answer[i] << " " ; 
    }
return 0; 
}