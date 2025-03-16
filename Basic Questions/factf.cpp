#include <iostream>
using namespace std;

int fact(int a ){
	int i = 1, fact = 1 ; 
   while( i <= a){
   	fact = fact*i;
   	i++;
   }
 return fact ; 
}
int main() {
  fact(5);
  int result = fact(5);
  cout << "The factorial of the number is : " << fact(5) ; 
    return 0;
}