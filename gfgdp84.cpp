#include<bits/stdc++.h>
using namespace std;

void solution(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, -1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] * (2*dp[i - 2] + dp[i - 1]);
    }
    cout<<dp[n];
}

int main()
{
    solution(4);
}