#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string expandAroundCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1); // Extract palindrome
    }

    string longestPalindrome(string s) {
        string longestPalindrome = "";
        for (int i = 0; i < s.length(); i++) {
            // Odd length palindrome
            string palindrome1 = expandAroundCenter(s, i, i);
            if (palindrome1.length() > longestPalindrome.length()) {
                longestPalindrome = palindrome1;
            }

            // Even length palindrome
            string palindrome2 = expandAroundCenter(s, i, i + 1);
            if (palindrome2.length() > longestPalindrome.length()) {
                longestPalindrome = palindrome2;
            }
        }
        return longestPalindrome;
    }
};

int main() {
    Solution sol;
    string s = "babad";
    cout << "Longest Palindromic Substring: " << sol.longestPalindrome(s) << endl;
    return 0;
}
