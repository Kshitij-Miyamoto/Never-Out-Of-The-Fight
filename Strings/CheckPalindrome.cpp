#include<iostream>
using namespace std ; 

bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            // Ignore non-alphanumeric characters
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;

            // Convert both characters to lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
int main()
{
    int result = isPalindrome("Naman") ; 
    cout << result ;  //As the word is a palindrome 1 is being returned.
    
return 0; 
}