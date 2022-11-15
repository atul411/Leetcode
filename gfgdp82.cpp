#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i - 1 >= 0)
            dp[i] += dp[i - 1];
        if (i - 3 >= 0)
            dp[i] += dp[i - 3];
        if (i - 4 >= 0)
            dp[i] += dp[i - 4];
    }
    return dp[n];
}

int main()
{
    cout<<solution(10);
}