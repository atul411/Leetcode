#include <bits/stdc++.h>
using namespace std;

void nthnewManconvay(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[dp[i - 1]] + dp[i - dp[i - 1]];
    }

    for (auto i : dp)
    {
        cout << i << "\t";
    }
}

int main()
{
    nthnewManconvay(10);
}