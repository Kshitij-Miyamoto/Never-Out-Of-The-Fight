#include <iostream>
using namespace std;


void pairsum(int arr[] , int n , int target){
 int left = 0 ; 
 int right = n-1 ; 
 while( left < right){
 	int sum = arr[left] + arr[right] ; 

 	if( sum == target){
 		cout << "The sum pair is  : "<< arr[left] << " and " << arr[right] ; 

 		left++;
 		right --;
 	}
 	else if( sum > target){
 		right -- ; 
 	}
 	else{
 		left++ ; 
 	}
 }
}
int main() {
   int arr[] = {1, 2, 3, 4, 6} ; 
   int n = sizeof(arr)/sizeof(arr[0]) ; 
   pairsum(arr , n, 6);
    return 0;
}