#include<iostream>
using namespace std ; 
int main()
{
    string s1 = "abc" ; 
    string s2 = "defgh" ; 

    s2 = s1 ; 
    cout << s2 <<endl ;
    cout << sizeof(s2)<< "bits" <<endl ; 

    for(int i = 0 ; i < s1.size() ; i++){
        cout << s1[i] << " " ; 
        cout << s2[i] << " " ; 
    }

    return 0; 
}