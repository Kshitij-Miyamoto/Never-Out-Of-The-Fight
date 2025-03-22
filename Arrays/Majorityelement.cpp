#include<iostream>
using namespace std ; 
int main()
{
    int arr[]= {2,2,1,1,2,2,5,5,5,5,5,5,} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ;

    int count = 0 ; int candidate = arr[0] ; 

    for( int i = 0 ; i < n ; i++){
      if( count == 0 ){
        candidate = arr[i] ; 
      }
      if( arr[i] == candidate){
         count ++ ; 
      }else{
        count -- ; 
      }
    }
    cout << "The majority element is  : " << candidate ; 
return 0; 
}