class Solution {
    public:
    static bool isSubsetSum(std::vector<int>& arr, int sum) {
        int n = arr.size();
        std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(sum + 1, false));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
            }
        }
        return dp[n][sum];
    }
};
