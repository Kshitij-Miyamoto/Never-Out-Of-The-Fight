#include <iostream>
using namespace std;

int multipy( int a , int b){
	return a*b ; 
}
int main() {
    int result = multipy(4 , 5);
    cout << "The product is : " << result << endl; 
    return 0;
}