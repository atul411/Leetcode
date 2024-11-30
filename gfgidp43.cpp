#include<bits/stdc++.h>

int solution(string str1, string str2, int n, int m)
{
    if (m <= 0)
        return 1;
    if (n <= 0)
        return 0;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str1[i] == str2[m - 1])
        {
            ans += solution(str1, str2, i, m - 1);
        }
    }
    return ans;
}

int solutionDp(string str1, string str2)
{
    int n = str1.size(), m = str2.size();
    int dp[n + 1][m + 1];
    fill(dp[0][0], n + 1, m + 1, 0);
    dp[0][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            for(int k=i-1; k>=0; k--){
                if(str1[k]==str2[j-1]){
                    dp[i][j] += dp[k][j-1];
                }
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string a = "geeksforgeeks", b = "ge";
    int len1 = a.size(), len2 = b.size();
    cout << solution(a, b, len1, len2);
    cout<<solutionDp(a,b);
}