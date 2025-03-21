#include<iostream>
using namespace std ; 
int Rain_water_trapping(int arr[] , int n ){
    int i = 0 ; 
    int j = n-1 ; 
    int max_water = 0 ; 
    while( i < j){
        int height = min(arr[i] , arr[j]) ; 
        int width = j-i ; 
        int area = height*width ; 
        max_water = max(max_water , area) ; 
        if( arr[i] < arr[j]){
             i++ ; 
        }else{
            j-- ; 
        }
    }
    return max_water ; 
}
int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int result = Rain_water_trapping(arr , n ) ; 
    cout << "The maximum water being stored will be equal to : " << result ; 
return 0; 
}