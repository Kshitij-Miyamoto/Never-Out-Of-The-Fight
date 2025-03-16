#include <iostream>
using namespace std;

int occur(int arr[] , int n, int element ){
	int count = 0 ;
	for(int i = 0 ; i < n ; i++){
		if( arr[i] == element){
			count = count + 1 ; 
		}
	}

    return count ; 

}
int main() {
 int arr[] = { 10, 20, 20, 30, 20, 40, 50} ; 
 int element = 20 ;
 int n = sizeof(arr)/sizeof(arr[0]);
 int occurence = occur(arr , n , element);
 cout << "The number of occurences are : " << occurence << endl ; 
     return 0;
}