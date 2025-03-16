#include <iostream>
using namespace std;
int nonrepeat(int arr[] , int size){
	int i , j = 0 , nr ; 
	for( i = 0 ; i < size ; i++){
  	for( j = i+1 ; j < size ; j++){
  		if ( arr[i] != arr[j]){
         nr = arr[j] ; 
  		}
  
  	}
    return nr ;
  }
  return -1; 
}
int main() {
    int arr[] = {20, 20, 20, 40, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = nonrepeat(arr, size);
    if (result != -1)
        cout << "The first non repeating number is: " << result << endl;
    else
        cout << "Only repeating numbers found!" << endl;

    return 0;
}