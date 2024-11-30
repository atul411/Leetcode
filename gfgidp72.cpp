#include<bits/stdc++.h>

void solution(vvi arr)
{
    int n = arr.size(), m = arr[0].size();
    int dp[n][m];
    fill(dp[0][0], n, m, 0);
    dp[0][0] = 1;
    for (int i = 1; i < m; i++)
    {
        if (arr[0][i] == -1)
            continue;
        dp[0][i] = dp[0][i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i][0] == -1)
            continue;
        dp[i][0] = dp[i - 1][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] == -1)
                continue;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    solution({{0, 0, 0, 0},
              {0, -1, 0, 0},
              {-1, 0, 0, 0},
              {0, 0, 0, 0}});
}