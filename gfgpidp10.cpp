#include "library.h"

int solution(vi val, vi weight, int W, int n)
{
    if (n < 0 or W < 0)
        return 0;
    if (weight[n] > W)
    {
        return solution(val, weight, W, n - 1);
    }
    return max({val[n] + solution(val, weight, W - weight[n], n - 1), solution(val, weight, W, n - 1)});
}

int solutionDp(vi val, vi weight, int W, int n)
{
    int dp[W + 1][n + 1];
    fill(dp[0][0], W + 1, n + 1, 0);
    for (int i = 1; i <= W; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            dp[i][j] = i >= weight[j - 1] ? max(val[j - 1] + dp[i - weight[j - 1]][j - 1], dp[i][j - 1]) : dp[i][j - 1];
        }
    }
    return dp[W][n];
}

int main()
{
    cout << solution({60, 100, 120}, {10, 20, 30}, 50, 2)<<endl;
    cout << solution({60, 100, 120}, {10, 20, 30}, 50, 3);
}