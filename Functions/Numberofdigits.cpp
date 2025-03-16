#include <iostream>
using namespace std;

int count( int a){
	if(a% 10 == 0){
  return 0 ; 
} 

  return count(a/10) + 1 ; 
}
int main() {
  int res = count(1234567);
  cout<< "The number of digits in the number are : " << res << endl ; 
    return 0;
} 