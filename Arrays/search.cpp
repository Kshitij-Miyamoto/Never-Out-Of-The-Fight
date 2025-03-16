#include <iostream>
using namespace std;


int search(int arr[] , int n, int element){

	for(int i = 0 ; i < n ; i++){
		if(arr[i] == element){
			return i ; 
		}

	}
		return -1 ; 
	}
	
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int element = 100 ; 
    int result  = search(arr , n, element) ;
    cout << "The index is : " << result ; 
    

    return 0;
}