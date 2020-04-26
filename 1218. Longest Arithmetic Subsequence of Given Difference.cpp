

int longestSubsequence(int* arr, int size, int k){
    int max = 1, c, dp[400001] = {0};
    for (int i = 0; i < size; i++)
    {
        c = arr[i]+200000;
        if (dp[c-k] > 0)
        {
            dp[c] = dp[c-k]+1;
            max = max < dp[c] ? dp[c]:max;
        }
        else
        {
            dp[c] = 1;
        }
    }
    return max;
}