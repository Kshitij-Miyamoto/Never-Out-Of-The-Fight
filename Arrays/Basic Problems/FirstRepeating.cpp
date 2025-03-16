#include <iostream>
using namespace std;

int repeat(int arr[] , int size){
	int i , j = 0 ; 
	for( i = 0 ; i < size ; i++){
  	for( j = i+1 ; j < size ; j++){
  		if ( arr[i] == arr[j]){
           return arr[i] ; 
  		}
  	}

  }
  return -1; 
}
int main() {
  int arr[] = {10, 20, 20, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = repeat(arr, size);
    if (result != -1)
        cout << "The first repeating number is: " << result << endl;
    else
        cout << "No repeating numbers found!" << endl;

    return 0;
}
