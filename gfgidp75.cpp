#include "library.h"

int solution(vi arr, int target)
{
    int n = arr.size();
    int max = *max_element(arr.begin(), arr.end()), bitcount = log2(max) + 1;
    int maxNum = pow(2, bitcount) - 1;
    int dp[n + 1][maxNum + 1];
    fill(dp[0][0], n + 1, maxNum, 0);
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= maxNum; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j ^ arr[i - 1]];
        }
    }
    return dp[n][target];
}

int main()
{
    cout << solution({1, 2, 3, 4, 5}, 4);
}