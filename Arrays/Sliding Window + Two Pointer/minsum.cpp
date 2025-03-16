#include <iostream>
using namespace std;


int minsum(int arr[], int n , int k){
	int windowsum = 0, minsum = 0 ;

	for(int i = 0 ; i < k ; i++){
		windowsum = windowsum + arr[i] ; 
	}
	minsum = windowsum ; 

	for(int i = k ; i < n ; i++){
		windowsum = arr[i] - arr[i-k] + windowsum ; 
		minsum = min(windowsum, minsum) ;
	}
	return minsum ; 
}
int main() {
  int arr[] = {2, 1, 5, 1, 3, 2};
  int k = 3 ; 
  int n = sizeof(arr)/sizeof(arr[0]);
  int result = minsum( arr, n, k);
  cout << "The minimum sum of the array will be equal to : " << result << endl ; 
    return 0;
}