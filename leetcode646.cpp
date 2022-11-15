#include <bits/stdc++.h>
using namespace std;

class Solution
{
    using vi = vector<int>;
    static bool comprator(vi a, vi b)
    {
        return a[1] <= b[1];
    }

public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end(), comprator);
        int n = pairs.size();
        int dp[n];
        fill_n(dp, n, 1);
        for (int i = 1; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (pairs[j][1] < pairs[i][0] and dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }

        return *max_element(dp, dp + n);
    }
};