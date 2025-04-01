#include<iostream>
using namespace std ; 
int main()
{
    //Common string methods and functions : 

    string str = "Kshitij" ; 
    cout << str.size() << endl  ; 
    cout << str.append("21") << endl ; //the original string gets modified obviously
    cout << str.empty() << endl; 
     str.pop_back() ;
     cout << str << endl ; 
      str.push_back('X') ; 
      cout << str << endl ; 
    
    string s2 = "Sharma" ; 
    cout << str.append(s2) << endl ; //So here the new str = str + s2

    cout << str + s2 << endl ; // hence here the concatenation will give us : str + s2
    
    cout << str.substr(1, 3);  // "bcd"
    cout << str.find("Kshitij");  

return 0; 
}