#include <iostream>
using namespace std;


int fact(int a) {
	if( a == 0){
    return 1 ; 
	}
	return a * fact(a-1);
}
int main() {
  int result =  fact(5);
  cout << "The factorial of the number is : " << result << endl ; 
    return 0;
}