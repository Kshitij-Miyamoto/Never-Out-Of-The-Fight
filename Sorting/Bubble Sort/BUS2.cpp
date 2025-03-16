//optimised Bubble Sort
#include<iostream>
using namespace std ; 
void BubbleSort(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        bool flag = false ; // No swaps in the ith swap
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]) ; 
                flag = true ; 
            }
        }
        if(flag == false){
            break ; 
        }
    }
    for(int k = 0 ; k < n  ; k++){
        cout << arr[k] << " " ; 
    }
    
}

int main()
{
    int arr[] = {50, 40, 70, 20, 100, 10, 200} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    BubbleSort(arr , n);

return 0; 
}