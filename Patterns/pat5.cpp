#include<iostream>
using namespace std ; 
int main()
{
    int i = 1 ;
     int cnt = 1 ;
     int n ; 
    cout << "Enter the lines : " << endl ; 
    cin >> n ; 
    while( i <= n ){

        int j = 1 ;
            while( j <= n){
            cout << cnt << " " ;
            cnt++;
            j++;
        }
        cout << endl ; 
        i++;
    }
return 0; 
}