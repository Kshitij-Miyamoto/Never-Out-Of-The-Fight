//Leetcode : 153 ; Minimum in a rotated sorted array : 
#include<iostream>
using namespace std ; 
int minelement(int arr[] , int n ){
    int left = 0 ;
    int right = n-1 ;
    while(left < right){
        int mid = left + (right-left)/2 ;
        if(arr[mid] > arr[right]){
            //the minimum element lies on the righ hand side ; 
            left = mid+1 ;

        }else{
            right = mid ; 
        }
    }
    return arr[left] ; 
}
int main()
{
    int arr[] = {3,4,5,1,2} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int result = minelement( arr,  n );
    cout << "The minimum element is : " << result ; 
return 0; 
}