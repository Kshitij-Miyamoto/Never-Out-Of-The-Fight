#include <iostream>
using namespace std;

int main() {

	int n ; 
	cout<< "Enter the size of an array : " << endl ; 
  int* arr = new int[n]; 


//Taking inputs in the array 
	cout << "Enter the values to be put inside the array : " << endl ; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i]  ;  
	}
//Printing the array
	for(int j = 0 ; j < n ; j++){
		cout << arr[j] << endl ; 
	}
	delete[] arr;
    return 0;
}