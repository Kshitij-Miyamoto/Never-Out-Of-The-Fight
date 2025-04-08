#include<iostream>
using namespace std ; 
int main()
{
    string s = "abcd" ; 
    for(int i = 0 ; i < s.size() ; i++){
        for(int j = i ; j < s.size() ; j++){
          for(int k = j ; k <= j ; k++){
            cout << s[k] ; 
          }
          cout << endl ; 
        }
        cout << endl ; 
    }
    cout << endl ; 
return 0; 
}