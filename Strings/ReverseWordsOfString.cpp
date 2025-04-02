#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.size();

        for (int end = 0; end <= n; end++) {
            // If we reach a space or end of string, reverse the word
            if (end == n || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1; // Move to the next word
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s1 = "Let's take LeetCode contest";
    string s2 = "Mr Ding";

    cout << sol.reverseWords(s1) << endl; // Output: "s'teL ekat edoCteeL tsetnoc"
    cout << sol.reverseWords(s2) << endl; // Output: "rM gniD"

    return 0;
}
/*
Iterate through the string, and whenever a space is found (or end of the string is reached), reverse the word.

Reverse function:

reverse(s.begin() + start, s.begin() + end);

This reverses only the characters inside the word.

Update start to the next word after each phase 
*/