#include <iostream>
using namespace std;

int fibo(int n){
	if( n == 0){
		return 0 ; 
	}
	if ( n == 1){
		return 1 ; 
	}
	return(fibo(n-1) + fibo(n-2));

}
int main() {
	int res = fibo(6);
	cout << "The nth number in the series is : " << res << endl ; 
    return 0;
}