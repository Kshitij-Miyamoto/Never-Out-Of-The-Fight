#include <iostream>
using namespace std;

 void leftrotate( int arr[] , int n ){
	int temp = arr[0] ;
	int size = n ;  
     temp = arr[size] ; 
	for(int i = 0 ; i < size ; i++){
		arr[i] = arr[i+1] ; 
       cout << arr[i] << " " ; 
	}
}
int main() {
	 int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " New array :  " ;
    leftrotate(arr, n) ;
    return 0;
}