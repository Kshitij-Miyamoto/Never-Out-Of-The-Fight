#include<iostream>
#include<string>
using namespace std ; 
int main()
{
    string str = "Kshitij Sharma" ; 
    string ori = str ; 
    int i = 0 ; 
    int j = str.size()-1  ; 

    while( i < j ){
        swap(str[i] , str[j]);
        i++ ; 
        j-- ; 
    }
    cout << "The orginal string is : " << ori << endl ; 
    cout << "The reversed string is : " << str << endl  ; 

    
return 0; 
}