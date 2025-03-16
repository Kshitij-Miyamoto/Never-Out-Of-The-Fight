#include <iostream>
using namespace std;

int main() {
int a = 6, fact = 1, i = 1;

while( i <= a){
	fact = fact*i;
	i++;
}

cout << "The factorial is : " << fact <<endl ; 

    return 0;
}