#include <iostream>
#include <set>
using namespace std;

int main() {
  int n ;
  set <int> s = {10, 20, 30, 40};
  cout << "Enter the number to be found : " << endl; 
  cin >> n ;

  auto it = s.find(n) ; 

  if( it != s.end()){
  	cout << "Element was found, Value being " << *it << endl ; 
  }else{
  	cout << "Not found " << endl ; 
  }

    return 0;
}