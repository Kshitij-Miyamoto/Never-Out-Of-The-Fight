#include <iostream>
using namespace std;

void greet( string name ){
	if (name.empty()){
		cout << "Hello, Guest" << endl ; 
	}else{
		cout << "Hello" << name ; 
	}
}
int main() {
   greet(" Salu Boi");
    return 0;
}