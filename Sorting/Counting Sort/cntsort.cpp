#include<iostream>
using namespace std ; 
int main()
{
    int arr[] = { 1, 0, 3, 2, 3, 1, 2, 0, 2} ;
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    int k = 3 ; //denotes the maximum number of elements in the array
    int freq[10] ; 

    for (int i = 0 ; i < n ; i++){
        freq[arr[i]]++ ;

    }
    //for(int i = 0 ; i <= k ; i++){//
     //   cout << freq[i] << " ";//
   // }//
    //cout << endl ;//
    
return 0; 
}