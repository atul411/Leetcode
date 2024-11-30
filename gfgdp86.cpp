#include<bits/stdc++.h>
using namespace std;

int solution(int n, int m)
{
    int dp[n + 1][m + 1];
    fill_n(&dp[0][0], (n + 1) * (m + 1), 0);
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0];
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = dp[0][i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[n][m];
}

int main()
{
    cout << solution(3, 6);
}