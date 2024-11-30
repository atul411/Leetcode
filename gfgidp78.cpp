#include<bits/stdc++.h>

ll dp[50][50];
ll solution(ll n, ll sum)
{
    if (n <= 0 or sum <= 0)
        return 0;
    if (n == 1 and sum >= 1 and sum <= 9)
    {
        return 1;
    }
    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }
    ll ans = 0;
    for (int i = 0; i <= 9; i++)
    {
        ans += solution(n - 1, sum - i);
    }
    dp[n][sum] = ans;
    return ans;
}

int main()
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << solution(30, 28);
}