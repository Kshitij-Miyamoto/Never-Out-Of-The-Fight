#include <iostream>
using namespace std;

int secondLargest( int arr[] , int size){
     int largest = INT_MIN ; 
     int secondLargest = INT_MIN ; 
     for(int i = 0 ; i < size ; i++){
     	if( arr[i] > largest){
     		largest = arr[i] ; 
     		secondLargest = largest ; 
     	}
     	else if ( arr[i] < largest && arr[i] > secondLargest){
     		secondLargest = arr[i] ; 
     	}
     }
    return secondLargest ; 
}

int main() {
 int arr[] = {10, 20, 4, 45, 99, 99, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    cout << "Second largest element: " << result << endl;
    return 0;
}