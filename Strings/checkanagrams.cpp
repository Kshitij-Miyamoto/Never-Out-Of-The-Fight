#include <iostream>
#include <algorithm>

using namespace std;

bool anagrams(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << s1 << endl;
    cout << s2 << endl;

    return s1 == s2;
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