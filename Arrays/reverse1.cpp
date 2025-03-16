#include <iostream>
using namespace std;

int main() {
	int arr[5] = {10, 20, 30, 40} ; 
	int n = sizeof(arr)/sizeof(arr[0]) ; 
	int start = 0 ; int end = n-1 ; 

	while( end > start){
		swap(arr[start] , arr[end]);
		start ++ ; 
		end -- ;
	}
    
    for(int i = 1 ; i<n ; i++){
    	cout << arr[i] << endl ;
    }
    return 0;
}