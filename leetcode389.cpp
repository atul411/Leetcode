#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int dp[26];
        fill_n(dp, 26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            dp[s[i] - 'a']--;
        }
        for (int i = 0; i < t.length(); i++)
        {
            dp[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (dp[i])
            {
                return 'a' + i;
            }
        }
        return 'a';
    }
};