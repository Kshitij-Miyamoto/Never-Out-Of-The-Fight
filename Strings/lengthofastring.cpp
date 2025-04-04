#include<iostream>
#include <cstring>
using namespace std ; 
int main()
{
    char str[] = "Coding blocks " ; 
    int cnt = 0 ; 
    for(int i = 0 ; str[i] != '\0' ; i++ ){
        cnt++ ; 

    }
    cout << "The number of characters are : " <<  cnt << endl ; 
    cout << strlen(str) << endl ;
return 0; 
}