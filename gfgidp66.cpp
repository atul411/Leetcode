#include "library.h"

bool solution(int n, int x, int y)
{
    bool dp[n + 1];
    fill(dp[0], n+1, false);
    dp[0] = false;
    dp[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (i - 1 >= 0 and !dp[i - 1])
        {
            dp[i] = true;
        }
        if (i - x >= 0 and !dp[i - x])
        {
            dp[i] = true;
        }
        if (i - y >= 0 and !dp[i - y])
        {
            dp[i] = true;
        }

    }
    return dp[n];
}
int main()
{
    cout << solution(5, 4, 13);
}