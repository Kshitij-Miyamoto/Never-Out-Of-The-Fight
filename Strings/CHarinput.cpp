#include<iostream>
using namespace std ; 

void readstring(char str[]){
    char ch ; 
    int i = 0 ; 
    while(true){
        ch = cin.get() ; 
        if(ch == '\n'){
            break ;
        }
        str[i] = ch ; 
        i++ ; 

    }
    str[i] = '\0' ; 
}
int main()
{
    char str[101] ; 
 cout << "Enter a string : " ; 
 readstring(str) ; 
 cout << "You have entered : " << str << endl ; 
return 0; 
}