#include<bits/stdc++.h>
using namespace std;

float solution(vector<vector<int>> arr)
{
    int n = arr.size(), m = arr[0].size();
    int dp[n][m];
    fill_n(&dp[0][0], n * m, 0);
    dp[0][0] = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + 1 < n)
            {
                if (dp[i + 1][j] < (dp[i][j] + arr[i + 1][j]))
                {
                    dp[i + 1][j] = dp[i][j] + arr[i + 1][j];
                }
            }
            if (j + 1 < m)
            {
                if (dp[i][j + 1] < (dp[i][j] + arr[i][j+1]))
                {
                    dp[i][j + 1] = dp[i][j] + arr[i][j+1];
                }
            }
        }
    }
    return dp[n - 1][m - 1]/(float)(2*n-1);
}

int main()
{
    cout << solution({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
}