#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalinSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == rev[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][n];
    }
};

int main() {
    Solution sol;
    string s = "bbbab";
    cout << "Longest Palindromic Subsequence Length: " << sol.longestPalinSubseq(s) << endl;
    return 0;
}
