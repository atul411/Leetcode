#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countArrangement(int n)
    {
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1];
            for (int j = i - 1; j >= 1; j--)
            {
                if (i % j == 0)
                {
                    dp[i]++;
                }
            }
        }
        return dp[n];
    }
};