#include<bits/stdc++.h>
using namespace std;



int solution(string str1, string str2, int n, int m)
{
    int dp[n + 1][m + 1];
    fill_n(&dp[0][0], (n + 1) * (m + 1), 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = str1[i - 1] == str2[j - 1] ? max({1 + dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}):max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main()
{
    string str1 = "GeeksforGeeks", str2 = "GeeksQuiz";
    int n = str1.size(), m = str2.size();
    cout << solution(str1, str2, n, m);
}