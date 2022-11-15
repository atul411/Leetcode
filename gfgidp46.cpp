#include "library.h"

bool isklenSame(string str1, string str2, int i, int j, int k)
{
    bool temp = true;
    for (int x = 0; x < k; x++)
    {
        temp &= (str1[i - 1 - x] == str2[j - 1 - x]);
    }
    return temp;
}
int solution(string str1, string str2, int k, int i, int j)
{
    if (i < k or j < k)
        return 0;
    int ans = minInteger;
    if (isklenSame(str1, str2, i, j, k))
    {
        ans = max(ans, k + solution(str1, str2, k, i - k, j - k));
    }
    ans = max({ans, solution(str1, str2, k, i - 1, j), solution(str1, str2, k, i, j - 1)});
    return ans;
}

int solutionDp(string str1, string str2, int k)
{
    int n = str1.size(), m = str2.size();
    int cnt[n + 1][m + 1], dp[n + 1][m + 1];
    fill(cnt[0][0], n + 1, m + 1, 0);
    fill(dp[0][0], n + 1, m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (str1[i - 1] == str2[j - 1])
            {
                cnt[i][j] = cnt[i - 1][j - 1] + 1;
            }
            if (cnt[i][j] >= k)
            {
                for (int a = k; a <= cnt[i][j]; a++)
                {
                    dp[i][j] = max(dp[i][j], dp[i - a][j - a] + a);
                }
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string a = "aggayxysdfa", b = "aggajxaaasdfa";
    int i = a.length(), j = b.length(), k = 4;
    cout << solution(a, b, k, i, j);
    cout << solutionDp(a, b, k);
}