#include "library.h"
const int n = 100;
int solution(string str)
{
    int n = str.size();
    bool dp[n][n];
    fill(dp[0][0], n, n, false);
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                dp[i][j] = true;
            }
            else
            {
                if (str[i] == str[j] and (j == i + 1 or dp[i + 1][j - 1]))
                {
                    dp[i][j] = true;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dp[i][j])
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    return ans;
}

int dp[n][n];

int longestPalindromicsubsequence(string str, int i, int j)
{
    if (i == j)
        return 1;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (str[i] == str[j] and i + 1 == j)
    {
        return 2;
    }
    if (str[i] == str[j])
    {
        dp[i][j] = 2 + longestPalindromicsubsequence(str, i + 1, j - 1);
    }
    else
        dp[i][j] = max(longestPalindromicsubsequence(str, i + 1, j), longestPalindromicsubsequence(str, i, j - 1));
    return dp[i][j];
}

int main()
{
    fill(dp[0][0], 100, 100, -1);
    string str = "GEEKSFORGEEKS";
    cout << solution(str) << endl;
    cout << longestPalindromicsubsequence("GEEKSFORGEEKS", 0, str.size() - 1);
}