#include <iostream>
using namespace std;

int main() {
	int arr[] = {10, 20, 30, 40, 50} ; 
	int n = sizeof(arr)/sizeof(arr[0]) ; 
	int i = 0 ; 
	while( i < n){
		cout << arr[i] << endl ; 
		i++ ; 
	} 
    return 0;
}