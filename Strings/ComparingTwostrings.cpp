#include<iostream>
#include <string>

using namespace std ; 
int main()
{
    string s1 = "hello" ; 
    string s2 = "Kshitij" ; 
    int i = 0 ; 
    int j = 0  ; 
    while(s1[i] != '\0' && s2[j] != '\0'){
        if(s1[i] > s2[j]){
            return 1 ; 
        }
        else if(s1[i] < s2[j]){
            return -1 ; 
        }
        i++ ; 
        j-- ; 
    }
    if(s1[i] != '\0'){
        return 1 ; 
    }else if( s2[j] != '\0'){
        return -1 ; 
    }else{
        return 0 ; 
    }
return 0; 
}