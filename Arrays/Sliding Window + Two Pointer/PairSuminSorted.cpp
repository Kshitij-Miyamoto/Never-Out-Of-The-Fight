#include <iostream>
using namespace std;

void pairsum(int arr[] , int n){
	for(int start = 0 ;  start < n-1 ; start++){
		for(int end = n-1 ; end > start ; end--){
			if( arr[start] + arr[end] == 6){
				cout << "The sum pair is : " << arr[start] << " and " << arr[end] ; 
			}
			}
		}
}
int main() {
 int arr[] = {1, 2, 3, 4, 6} ; 
 int n = sizeof(arr)/sizeof(arr[0]) ; 
 pairsum(arr , n);
    return 0;
}