#include "library.h"

int solutiin(int n, int k)
{
    int dp[n + 1][k + 1];
    fill(dp[0][0], k + 1, n + 1, 0);
    /**
     * @brief s(n, k) = k*s(n-1, k) + s(n-1, k-1)
     *
     */
    for (int i = 0; i <= n; i++)
    {
        dp[i][1] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= k and j <= i; j++)
        {
            if (i == j)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = j * dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
    }
    return dp[n][k];
}

int main()
{
    cout<<solutiin(3,1);
}