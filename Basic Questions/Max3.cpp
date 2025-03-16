#include <iostream>
using namespace std;

int main() {
  int a, b, c ; 
  cout << "Enter the firt number: " << endl ; 
  cin >> a ;
  cout << "Enter the second number: " << endl ; 
  cin >> b ;
  cout << "Enter the third number : "<< endl ; 
  cin >> c ;


  if( a > b && a > c){
  	cout << "The greatest of the three is : " << a ; 
  }
  else if ( b > c && b > a){
  	cout << "The greatest of the three is : " << b ; 
  }
  else{
  	cout << "The greatest of the thress is : " << c ;
  }
    return 0;
}
