#include <iostream>
using namespace std;

int main() { 
	int arr[] = {10, 20, 70, 40 ,50} ; 
	int max = arr[0];
	int size = sizeof(arr)/sizeof(arr[0]) ; 
  for(int i = 0 ; i <= size ; i++ ){
  	if( max < arr[i]){
     max = arr[i] ; 
  }
  
}
cout << "The largest element of the array is : " << max ;
  return 0;
}