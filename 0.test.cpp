#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int longestCommonSubsequence(char * text1, char * text2){
    int n1 = sizeof(text1), n2 = sizeof(text2);
    int dp[n1+1][n2+1];
    int max1 = 0;
    // 清零
    for (int i = 0; i <= n1; i++) dp[i][0] = 0;
    for (int i = 1; i <= n2; i++) dp[0][i] = 0;

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (text1[i+1] == text2[j+1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            max1 = max(max1, dp[i][j]);
        }
    }
    return max1;
}

int main(int argc, char const *argv[])
{
    char text1[] = "abc";
    char text2[] = "def";
    int n = longestCommonSubsequence(text1, text2);
    printf("%d\n", n);
    return 0;
}