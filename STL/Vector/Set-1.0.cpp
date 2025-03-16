#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> s ; 
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);

    cout << "Set elements: ";
    for (int x : s) cout << x << " ";

    cout << endl ; 


    	  if(s.find(3) != s.end()){
    	  	cout << "3 is present in the set" << endl ; 
    	  }
    	  if(s.count(2)){
    	  	cout<< "2 is present " << endl ; 
    	  }

    	  return 0 ; 
    }
    



