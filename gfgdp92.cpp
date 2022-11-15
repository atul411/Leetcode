#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    if (n < 4)
        return 1;
    if (n == 4)
        return 2;
    return solution(n - 4) + solution(n - 1);
}

int solutiondp(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i < 4)
        {
            dp[i] = 1;
            continue;
        }
        dp[i] = i == 4 ? 2 : dp[i - 1] + dp[i - 4];
    }
    return dp[n];
}

int main()
{
    cout << solutiondp(30);
}