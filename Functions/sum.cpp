#include <iostream>
using namespace std;
int sum(int n){
	if( n == 0) return 0 ; 
	return n + sum(n-1) ;  
}
int main() {
 int res = sum(10);
 cout<< "The sum of the n natural numbers is : " << res << endl; 
    return 0;
}