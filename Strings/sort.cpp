#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
int main()
{
    string s = "adcgfe" ; 
    cout << s << endl ; 
    sort(s.begin() , s.end()) ; 
    cout << s << endl ; 
return 0; 
}
