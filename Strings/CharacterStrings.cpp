#include<iostream>
using namespace std ; 

int main()
{
    char str[] = {'a' , 'b' , 'c' , 'd' , 'e' , '\0'} ;  
    cout << sizeof str << " bytes" << endl ;  //Size of each character is 1 byte, hence of 5 characters will be 5 bytes.
    cout << addressof(str) << endl ;     //Gives the address of the whole string, where it is stored.
    cout << addressof(str[0]) << endl ;  //This is also the address of the first character
    cout << sizeof *str << " byte" << endl ; //This is basially the size of the first character of the string.
    cout << addressof(*str) << endl ;  //This basically gives the address of the first character 
    cout << str  << endl ; 
    cout << str[0] << " " << str[1] << endl ; 
return 0; 
}