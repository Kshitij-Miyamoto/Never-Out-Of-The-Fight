#include<iostream>
using namespace std ; 
int main()
{
    string s = "abcdef" ; 

    string substring = s.substr(2) ; 
    cout << substring << endl ; 

    substring  = s.substr(2,3) ; 
    cout << substring << endl ; 
 
    substring = s.substr(1);
    cout << substring << endl ; 

    substring = s.substr(0) ; 
    cout << substring << endl ; 

    string name = "Kshitij" ; 
    reverse(name.begin() , name.end()) ; 
    cout << name << endl ; 
return 0; 
}