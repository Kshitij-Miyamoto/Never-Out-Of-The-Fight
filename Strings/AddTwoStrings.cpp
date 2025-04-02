#include <iostream>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i] - '0';  // Convert char to int
                i--;
            }
            if (j >= 0) {
                sum += num2[j] - '0';  // Convert char to int
                j--;
            }

            result.push_back((sum % 10) + '0');  // Convert int to char and add to result
            carry = sum / 10;  // Update carry
        }

        reverse(result.begin(), result.end());  // Reverse the result since we built it from right to left
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.addStrings("123", "456") << endl; // Output: "579"
    cout << sol.addStrings("999", "1") << endl;   // Output: "1000"
    return 0;
}
