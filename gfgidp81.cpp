#include "library.h"

ll dp[10][10][10];
ll solution(int n, int bcount, int ccount)
{
    if (bcount < 0 or ccount < 0)
    {
        return 0;
    }
    if (n == 0)
        return 1;
    if (dp[n][bcount][ccount] != -1)
    {
        return dp[n][bcount][ccount];
    }
    dp[n][bcount][ccount] = solution(n - 1, bcount, ccount) + solution(n - 1, bcount - 1, ccount) + solution(n - 1, bcount, ccount - 1);
    return dp[n][bcount][ccount];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cout << solution(8, 1, 2);
}