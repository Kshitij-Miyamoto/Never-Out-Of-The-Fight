#include <iostream>
using namespace std;


void printsub(int arr[] , int n ){
	int start, end = 0 ; 
	for(int start = 0 ; start < n ; start++){
		for(int end = 0 ; end < n ; end++){
			for(int i = start; i <= end ; i++ ){
				cout << arr[i] << " " ;
			}
			cout << endl ; 
		}
	}
}
int main() { 
	int arr[] = {1, 2, 3, 4, 5} ; 
	int n = sizeof(arr)/sizeof(arr[0]) ; 
	printsub( arr , n);


    return 0;
}
