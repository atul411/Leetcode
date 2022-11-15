#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.length();
        bool dp[n][n];
        fill_n(&dp[0][0], n * n, false);
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = true;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = true;
            }
        }
        for (int i = 3; i <= s.length(); i++)
        {
            for (int j = 0; j < s.length() - i + 1; j++)
            {
                int start = j, end = j + i - 1;
                if (s[start] == s[end] and dp[start + 1][end - 1])
                {
                    dp[start][end] = true;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << dp[i][j] << "\t";
                if (dp[i][j])
                {
                    ans++;
                }
            }
            cout << endl;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    s.countSubstrings("aaa");
}