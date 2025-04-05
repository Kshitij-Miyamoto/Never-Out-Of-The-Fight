#include <iostream>
#include <algorithm>

using namespace std;

bool anagrams(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
  int f1[26] = {} ; 

  for(int i = 0 ; s1[i] != '\0' ; i++){
    char ch = s1[i] ; 
    int idx = ch - 'a' ; 
    f1[idx] ++ ; 

  }
  int f2[26]; 
  memset(f2 , 0 , sizeof(f2)) ; 

  for(int i = 0 ; s2[i] != '\0' ; i++){
    //char ch = s1[i] ; 
    //int idx = ch - 'a' ; 
    //f2[idx] ++ ; 
    f2[s2[i] - 'a']++ ; 
  }
  //Comapare f1 and f2 : 

  for(int i = 0 ; i < 26 ; i++){
    if(f1[i] != f2[i]){
        return false ; 
    }
  }
  return true ; 
}

int main() {
    string s1 = "taste";
    string s2 = "state";

    if (anagrams(s1, s2)) {
        cout << "They are anagrams." << endl;
    } else {
        cout << "They are not anagrams." << endl;
    }

    return 0;
}