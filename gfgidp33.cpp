#include "library.h"

int solution(string str)
{
    int n = str.size(), ans = 0;
    int dp[n][n];
    fill(dp[0][0], n, n, false);
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            dp[i][i + 1] = true;
            ans++;
            cout<<str.substr(i, 2)<<endl;
        }
    }
    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;
            if (str[i] == str[j] and dp[i + 1][j - 1])
            {
                cout<<str.substr(i, k)<<endl;
                dp[i][j] = true;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    solution("abaab");
}