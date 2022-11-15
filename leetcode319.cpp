#include <bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution
{
public:
    ll gcd(ll a, ll b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    ll lcm(ll a, ll b)
    {
        return (a * b) / gcd(a, b);
    }
    int bulbSwitch(int n)
    {
        if (n == 0 or n == 1)
            return n;

        int ans = n / 2;
        int ls = 2;
        for (int i = 3; i < n; i++)
        {
            ans += n / i;
            ls = lcm(ls, i);
            ans -= n / ls;
        }
        return ans;
        bool dp[n];
        fill_n(dp, n, 1);
        for (int i = 2; i < n; i++)
        {
            for (int j = i - 1; j < n;)
            {
                dp[j] = !dp[j];
                j = j + i;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i])
                ans++;
        }
        return ans;
    }
};
