#include<bits/stdc++.h>

int dp[30][30][30];

int solution(vvi arr, int i, int j, int remain)
{
    int n = arr.size(), m = arr[0].size();
    if (i >= n or j >= m or remain < 0)
    {
        return 0;
    }
    if (i == n - 1 and j == m - 1)
    {
        return remain == arr[n - 1][m - 1] ? 1 : 0;
    }
    if (dp[i][j][remain] != -1)
    {
        return dp[i][j][remain];
    }
    dp[i][j][remain] = solution(arr, i + 1, j, remain - arr[i][j]) + solution(arr, i, j + 1, remain - arr[i][j]);
    return dp[i][j][remain];
}

int main()
{
    fill_n(&dp[0][0][0], 30 * 30 * 30, -1);
    vvi arr = {{1, 2, 3},
               {4, 6, 5},
               {3, 2, 1}};
    cout << solution(arr, 0, 0, 12);
}