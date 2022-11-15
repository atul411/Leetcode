#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLUSlength(string a, string b)
    {
        if (a == b)
            return -1;
        return findLUSlength(a, b, a.length(), b.length());
    }

    int findLUSlength(string a, string b, int len1, int len2)
    {
        int dp[len1 + 1][len2 + 1];
        for (int i = 0; i <= len1; i++)
        {
            dp[i][0] = len1;
        }
        for (int i = 0; i <= len2; i++)
        {
            dp[0][i] = len2;
        }
        dp[0][0] = 0;
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j < len2; j++)
            {
                if (a[i - 1] != b[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1]);
                }
            }
        }
        return dp[len1][len2];
    }
};

class Solution
{
public:
    int findLUSlength(vector<string> &strs)
    {
        string curr = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            
        }
    }
    int findLUSlength(string a, string b, int len1, int len2)
    {
        int dp[len1 + 1][len2 + 1];
        for (int i = 0; i <= len1; i++)
        {
            dp[i][0] = len1;
        }
        for (int i = 0; i <= len2; i++)
        {
            dp[0][i] = len2;
        }
        dp[0][0] = 0;
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j < len2; j++)
            {
                if (a[i - 1] != b[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1]);
                }
            }
        }
        return dp[len1][len2];
    }
};