#include<bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = i % 2 == 0 ? min(dp[i / 2], dp[i - 1]) + 1 : min(dp[i - 1], dp[(i + 1) / 2] + 1) + 1;
    }
    return dp[n];
}

int main()
{
    cout << solution(100000);
}