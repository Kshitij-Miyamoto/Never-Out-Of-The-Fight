//Search in a rotated sorted array.
#include<iostream>
using namespace std ; 
int BSinrotatedsorted(int arr[] , int n , int target){
    int left = 0 ; 
    int right = n-1 ; 
    while(left <= right){
        int mid = left + (right-left)/2 ; 
        if(arr[mid] == target){
            return mid ;
        }
        if( arr[mid] >= arr[left]){
            //to check the left half is sorted or not
            if( arr[left] <= target && arr[mid] > target){
                right = mid -1 ; 
            }else{
                left = mid+1 ;

            }
        }else{
            if(arr[mid] < target && arr[right] >= target){
                left = mid + 1 ; 
            }else{
                right = mid-1 ; 
            }
        }
    }
    return -1 ; 
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int target = 0 ; 
    int result = BSinrotatedsorted(arr , n , target);
    cout << "The element was found at " << result ; 
return 0; 
}