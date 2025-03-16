#include<iostream>
using namespace std ; 

int BinarySearch(int arr[] , int n , int target){
    int left = 0 ;
    int right = n-1 ;

    while( left <= right){
        int mid = (left+right)/2 ; 
        if(arr[mid] == target){
            return mid ; 
        }
        else if ( arr[mid] > target){
            right = mid -1 ;
        }
        else{
            left = mid + 1 ;
        }
        }    
        return -1 ;                
                            
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70} ; 
    int target = 60 ; 
    int n = sizeof(arr)/sizeof(arr[0]);
   int result =  BinarySearch(arr , n , target) ;
   cout << "The element was found at : index  " << result ; 
return 0; 
}