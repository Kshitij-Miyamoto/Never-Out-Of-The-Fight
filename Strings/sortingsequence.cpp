#include<iostream>
using namespace std ; 
int main()
{
    string arr[] = {"xyz" , "abc" , "gh" , "ijk"} ; 
    int n = 4 ; 

    sort(arr , arr+n) ; 
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << endl ; 
    }
    cout << endl ; 

return 0; 
}