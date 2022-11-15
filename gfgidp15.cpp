#include "library.h"

int solution(int m, int n, int x)
{
    if (n == 0 and x == 0)
        return 1;
    if (n == 0 and x != 0)
        return 0;
    if (n != 0 and x <= 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += solution(m, n - 1, x - i);
    }
    return ans;
}

int solutionDp(int m, int n, int x)
{
    int dp[n + 1][x + 1];
    fill(dp[0][0], n + 1, x + 1, 0);
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            int ans = 0;
            for (int k = 1; k <= m; k++)
            {
                if (j >= k)
                    ans += dp[i - 1][j - k];
            }
            dp[i][j] = ans;
        }
    }
    return dp[n][x];
}
int main()
{
    cout << solution(4, 2, 1) << endl;
    cout << solution(2, 2, 3) << endl;
    cout << solution(6, 3, 8) << endl;
    cout << solution(4, 2, 5) << endl;
    cout << solution(4, 3, 5) << endl;

    cout<<"============"<<endl;
    cout << solutionDp(4, 2, 1) << endl;
    cout << solutionDp(2, 2, 3) << endl;
    cout << solutionDp(6, 3, 8) << endl;
    cout << solutionDp(4, 2, 5) << endl;
    cout << solutionDp(4, 3, 5) << endl;
}