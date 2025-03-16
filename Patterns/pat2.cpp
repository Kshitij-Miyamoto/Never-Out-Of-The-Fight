#include <iostream>
using namespace std;

int main() {
  
  int n = 3 ;  

int i = 1 ;
while(i <= n){
	int j ; 
	while(j <= n){
		cout << i << " " ; 
		j = j+1 ;
	}
	cout<< endl ; 
	i = i+1 ; 
}
return 0 ; 
}