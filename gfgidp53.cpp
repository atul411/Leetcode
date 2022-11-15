#include "library.h"
int solution(vvi arr)
{
    int n = arr.size();
    int dp[n][n];
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = arr[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = minInteger;
            for (int k = 0; k < n; k++)
            {
                if (k != j)
                {
                    temp = max(temp, dp[i - 1][k]);
                }
            }
            dp[i][j] = temp + arr[i][j];
        }
    }
    int ans = minInteger;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dp[n - 1][i]);
    }
    return ans;
}

int main()
{
    cout << solution({{4, 2, 1},
                      {3, 9, 6},
                      {11, 3, 15}});
}