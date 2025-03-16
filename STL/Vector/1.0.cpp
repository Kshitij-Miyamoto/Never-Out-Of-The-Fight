#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v ; 
	v.reserve(10);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

  for(int i = 0 ; i < v.size() ; i++){
  	cout << v[i] << endl ; 
  }

  for( auto it = v.begin() ; it != v.end() ; it++){
  	cout << *it <<" " ; 
  }

  if( v.empty() == 0){
  	cout << "Vector is empty" << endl ;
  }else{
  	cout << "Not empty" << endl ; 
  }

   return 0 ; 

}