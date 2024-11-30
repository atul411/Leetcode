#include<bits/stdc++.h>
using namespace std;
string solution(string str1, string str2, int i, int j)
{
    if (i >= str1.length() and j >= str2.length())
        return string();
    if (i >= str1.size())
    {
        return str2.substr(j);
    }
    if (j >= str2.length())
        return str1.substr(i);
    if (str1[i] == str2[j])
    {
        return str1[i] + solution(str1, str2, i + 1, j + 1);
    }
    else
    {
        string a = str1[i] + solution(str1, str2, i + 1, j);
        string b = str2[j] + solution(str1, str2, i, j + 1);
        if (a.length() > b.length())
            return b;
        else
            return a;
    }
}
int solutionDp(string str1, string str2)
{
    int n = str1.size(), m = str2.size();
    int dp[n + 1][m + 1];
    fill(dp[0][0], n + 1, m + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + 1;
            }
        }
    }
    return dp[n][m];
}
int main()
{
    string a = solution("AGGTAB", "GXTXAYB", 0, 0);
    cout << a.length() << endl;
    cout << solutionDp("AGGTAB", "GXTXAYB") << endl;
}