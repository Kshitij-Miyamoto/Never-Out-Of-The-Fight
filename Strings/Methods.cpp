#include<iostream>
#include <string>
using namespace std ; 
int main()
{
 string s1 = "New" ; 
string s2 = "Delhi" ; 
string s3 = s1.append(s2) ; 
cout << s1 + s2 << endl ; 
cout << s1 << endl ; 
cout << s2 << endl ; 
//If we don't want to change s1 and s2, we can just use : s1 + s2 ; 
cout << s3 << endl ; 
cout << s1.compare(s3) << endl ; //basically returns a boolean if they aren't same.
cout << s2.compare(s2) << endl ; // Returns a boolean if they aren't the same.

string a = "abc" ; 
string b = "abc" ; 
cout << a.compare(b) << endl ; 
//Searching in a string ; 
string search = "NewMew2New"  ;
string substring = "New" ;
cout << search.find(substring) << endl  ; 
return 0; 
}