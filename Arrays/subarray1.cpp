#include<iostream>
using namespace std ; 
int main()
{
     int arr[] = {10, 20, 30, 40, 50}; // Correct array declaration
    int n = sizeof(arr) / sizeof(arr[0]); // Correct way to find array size

     for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            for(int k = i ; k <= j ; k++){
                cout << arr[k] << " " ;
            }
            cout << endl ; 
        }
     }


return 0; 
}