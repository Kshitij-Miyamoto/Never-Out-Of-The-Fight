//static sliding window approach

#include <iostream>
using namespace std;

int maxSum(int arr[], int n , int k){
	int maxSum = 0 ;
	for(int i = 0 ; i <= n-k ; i++){
		int sum = 0 ; 
		for(int j = i ; j < i+k; j++){
			sum = sum + arr[j];
		}
		maxSum = max(maxSum ,sum); 
	}
	return maxSum ; 
}
int main() {
  int arr[] = {1, 2, 5, 7, 8};
  int k = 3 ; 
  int n = sizeof(arr)/sizeof(arr[0]) ; 

  int result = maxSum(arr , n, k);

  cout << "The maximum sum of the subarray is: " << result ; 

    return 0;
}