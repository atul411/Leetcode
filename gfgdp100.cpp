#include<bits/stdc++.h>

int solution(vii arr)
{
    if (arr[0][0])
    {
        return 0;
    }
    int n = arr.size(), m = arr[0].size();
    int dp[n][m];
    fill(dp[0][0], n, m, 0);
    dp[0][0] = 1;
    for (int i = 1; i < m; i++)
    {
        dp[0][i] = arr[0][i - 1] ? 0 : dp[0][i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = arr[i - 1][0] ? 0 : dp[i - 1][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            dp[i][j] += arr[i][j - 1] ? 0 : dp[i][j - 1];
            dp[i][j] += arr[i - 1][j] ? 0 : dp[i - 1][j];
        }
    }
    return dp[n - 1][m - 1];
}

int main()
{
    cout << solution({{0, 0, 0},
                      {0, 1, 0},
                      {0, 0, 0}});
}