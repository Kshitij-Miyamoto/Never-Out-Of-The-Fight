#include<iostream>
using namespace std ; 
int main()
//Reversing a string, using builtin swap.
{
    string str = "Baahubali" ; 
    int i = 0 ; 
    int j = str.size()-1 ; 
    while( i < j){
        swap(str[i] , str[j]);
        i++ ; 
        j-- ; 
    }
    cout << str ; 
return 0; 
}