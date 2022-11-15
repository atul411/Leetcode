#include "library.h"

int solution(int w, int n, vi weight, vi val)
{
    if (n < 0 or w <= 0)
        return 0;
    if (weight[n] <= w)
    {
        return max(val[n] + solution(w - weight[n], n, weight, val), solution(w, n - 1, weight, val));
    }
    return solution(w, n - 1, weight, val);
}

int solutionDp(int w, vi weight, vi val)
{
    int n = weight.size();
    int dp[n + 1][w + 1];
    fill(dp[0][0], n + 1, w + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            dp[i][j] = weight[i - 1] <= j ? max(dp[i][j - weight[i - 1]] + val[i - 1], dp[i - 1][j]) : dp[i - 1][j];
        }
    }
    return dp[n][w];
}

int main()
{
    cout << solutionDp(100, {5, 10, 15}, {10, 30, 20});
}