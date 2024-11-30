#include<bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
        dp[i] = min(dp[i], dp[i - 1]+1);
    }
    return dp[n];
}

int main()
{
    cout << solution(16);
}