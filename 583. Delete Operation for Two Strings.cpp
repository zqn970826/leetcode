class Solution {
public:
    int minDistance(string text1, string text2) {
        int n1 = text1.size(), n2 = text2.size();
        int dp[n1+1][n2+1];
        int max1 = 0;
        // 清零
        for (int i = 0; i <= n1; i++) dp[i][0] = 0;
        for (int i = 0; i <= n2; i++) dp[0][i] = 0;

        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= n2; j++) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
                max1 = max(max1, dp[i][j]);
            }
        }
        return n1+n2-2*max1;
    }
};