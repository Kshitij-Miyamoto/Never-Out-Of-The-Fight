#include <iostream>
using namespace std;

void print(int a ){
	if( a == 0) return ; 
	cout << a << endl ;
	print(a -1) ;  
}
int main() {
    
    print(5) ;
    return 0;
}