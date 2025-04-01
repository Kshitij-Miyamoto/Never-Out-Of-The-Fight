#include<iostream>
using namespace std ; 
int main()
{
    //Declaring a string in cpp
    string s1 = "Kshitij Sharma" ; 
    cout << s1 << endl; 
   
// Accessing elements of an array 
  cout <<  s1[0] << endl ; 
  cout << s1[5] << endl ;

  cout << endl ;  

//Traversing through an string using for loop 
  for(int i  = 0 ; i < s1.size() ; i++){
    cout << s1[i] << endl ; 
  }
cout << endl ; 

//Traversing through the string using while loop
int j = 0 ; 
while (j < s1.size()){
    cout << s1[j] << endl ; 
 j++ ; 
}

cout << endl ;

//This basically gives us a single word input and output :
string str ; 
cout << "Enter the elements of the string : " << endl ; 
cin >> str  ;  
cout << str ; 

//This basically prints all the words in the line.
string str1 ; 
cout << "Enter the multi word string : " << endl ; 
cin >> str1 ; 
 getline(cin, str1); //basically only this will help us to retrieve a full line.
 cout << str1  << endl ; 






return 0; 
}

