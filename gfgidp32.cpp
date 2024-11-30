#include<bits/stdc++.h>
using namespace std;
string solution(string str1)
{
    int n = str1.size();
    int dp[n][n];
    fill(dp[0][0], n, n, 0);
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;
    int len = 1, start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str1[i] == str1[i + 1])
        {
            dp[i][i + 1] = 1;
            start = i;
            len = 2;
        }
    }
    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;
            if (dp[i + 1][j - 1] and str1[i] == str1[j])
            {
                dp[i][j] = 1;
                start = i;
                len = max(k, len);
            }
        }
    }
    return str1.substr(start, len);
}
int main()
{
    cout << solution("forgeeksskeegfor");
}