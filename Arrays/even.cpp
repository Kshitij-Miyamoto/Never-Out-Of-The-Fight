#include <iostream>
using namespace std;

int main() {
	int arr[5] = {13, 20, 30, 43, 50} ; 
     for(int i = 0 ; i<5 ; i++){
     	if(arr[i]%2 == 0){
     		cout << arr[i] << endl ; 
     	}
     }
    return 0;
}