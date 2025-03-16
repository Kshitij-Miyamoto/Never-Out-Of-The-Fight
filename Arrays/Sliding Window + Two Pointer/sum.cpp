#include <iostream>
using namespace std;

int main() {
	int arr[] = {10, 20, 30, 40, 50} ;
	int sum  = 0; 
	for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
		sum = sum + arr[i] ; 
}
    cout << "The sum of the array will be : " << sum << endl;
    return 0;
}