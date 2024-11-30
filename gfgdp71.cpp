#include<bits/stdc++.h>
using namespace std;

int solution(string str1, string str2, int i, int j, int l, int m)
{
    int dp[l + 1][m + 1];
    fill_n(&dp[0][0], (l + 1) * (m + 1), INT_MAX);
    dp[0][0] = 0;
    for (int i = 0; i <= l; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i-1] == str2[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = min({dp[i-1][j-1]+1, dp[i][j-1]+1, dp[i-1][j]});
            }
        }
    }
    return dp[l][m];
}

int main()
{
    cout << solution("sunday", "saturday", 0, 0, 6, 8);
}