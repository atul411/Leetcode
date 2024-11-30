#include<bits/stdc++.h>
using namespace std;
int solution(int n)
{
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < n; i++)
    {
        int ans = minInteger;
        for (int j = 1; j <= i; j++)
        {
            ans = max(j * dp[i - j], ans);
        }
        dp[i] = ans;
    }
    int ans = minInteger;
    for (int j = 1; j < n; j++)
    {
        ans = max(j * dp[n - j], ans);
    }
    dp[n] = ans;
    return dp[n];
}
int solutinTricky(int n)
{
    if (n == 2 or n == 3)
        return n - 1;
    int res = 1;
    while (n > 4)
    {
        n -= 3;
        res *= 3;
    }
    return n * res;
}
int main()
{
    int n = 55;
    cout << solution(n) << "\t" << solutinTricky(n)<<endl;
}