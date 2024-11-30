#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr, int m, int n)
{
    int dp[m + 1][n + 1];
    fill_n(&dp[0][0], (m + 1) * (n + 1), 0);
    dp[0][0] = arr[0][0];
    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = dp[0][i - 1] + arr[0][i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[0][i - 1] + arr[i][0];
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = j == n ? min(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j] : arr[i][j] + min({dp[i - 1][j], dp[i - 1][j - 1], dp[i - 1][j + 1]});
        }
    }
    return dp[m][n];
}

int main()
{
    cout << solution({{1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3}},
                     2, 2);
}