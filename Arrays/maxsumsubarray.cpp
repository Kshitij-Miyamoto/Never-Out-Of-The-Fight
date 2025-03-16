#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = {-2 , 1, -3, 4, -1, 2, 1, -5 , 4} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int maxsum = INT_MIN ; 
    

    for(int i = 0  ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int sum = 0 ; 
            for(int k = i ; k <= j ; k++){
                 sum = arr[k] + sum ;
                maxsum = max(sum, maxsum) ; 
            }
        }
    }    
    cout << "The maximum sum is : " << maxsum ; 
return 0; 
}