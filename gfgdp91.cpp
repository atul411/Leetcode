#include<bits/stdc++.h>
using namespace std;

int solution(int m, int n)
{
    int dp[m][n];
    dp[0][0] = 1;
  
    for (int i = 1; i < n; i++)
    {
        dp[0][i] = dp[0][i - 1];
    }
    for (int i = 1; i < m; i++)
    {
        dp[i][0] = dp[i-1][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

int main()
{
    cout<<solution(2,2);
}