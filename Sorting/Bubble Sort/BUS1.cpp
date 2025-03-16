#include<iostream>
using namespace std ; 
void BubbleSort(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]) ; 
            }
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