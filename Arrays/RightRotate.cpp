#include <iostream>
using namespace std;

void rightrotate(int arr[] , int n){
	int temp = arr[n-1] ; 
	for( int i = n-1  ; i > 0 ; i--){
		arr[i] = arr[i-1] ; 
	} 
	arr[0] = temp ; 
   
}
int main() {
   int arr[] = {1, 2, 3, 4} ;
   int n = sizeof(arr)/sizeof(arr[0]) ; 
   rightrotate(arr, n) ; 
   cout << "The right rotation will be : " << endl ; 
    for(int i = 0 ; i < n ; i++){
    	cout << arr[i] << " " ; 
    }

    return 0;
}