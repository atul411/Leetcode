#include<bits/stdc++.h>
using namespace std;
int dp[100][100][100];
int solution(vi arr1, vi arr2, int n, int m, int k)
{
    if (n <= 0 or m <= 0)
        return 0;
    if (arr1[n - 1] == arr2[m - 1])
        return 1 + solution(arr1, arr2, n - 1, m - 2, k);
    else
    {
        return k > 0 ? max({solution(arr1, arr2, n - 1, m, k), solution(arr1, arr2, n, m - 1, k), 1 + solution(arr1, arr2, n - 1, m - 1, k - 1)}) : max(solution(arr1, arr2, n - 1, m, k), solution(arr1, arr2, n, m - 1, k));
    }
}
int solutiondp(vi arr1, vi arr2, int n, int m, int k)
{
    if (n <= 0 or m <= 0)
        return 0;
    if (arr1[n - 1] == arr2[m - 1])
    {
        dp[n][m][k] = dp[n - 1][m - 1][k] != -1 ? 1 + dp[n - 1][m - 1][k] : 1 + solution(arr1, arr2, n - 1, m - 2, k);
    }
    else
    {
        dp[n - 1][m][k] = dp[n - 1][m][k] == -1 ? solution(arr1, arr2, n - 1, m, k) : dp[n - 1][m][k];
        dp[n][m - 1][k] = dp[n][m - 1][k] == -1 ? solution(arr1, arr2, n, m - 1, k) : dp[n][m - 1][k];
        if (k > 0)
        {
            dp[n - 1][m - 1][k - 1] = dp[n - 1][m - 1][k - 1] == -1 ? solution(arr1, arr2, n - 1, m - 1, k - 1) : dp[n - 1][m - 1][k - 1];
            dp[n][m][k] = max({dp[n - 1][m][k], dp[n][m - 1][k], dp[n - 1][m - 1][k - 1] + 1});
        }
        else
        {
            dp[n][m][k] = max({dp[n - 1][m][k], dp[n][m - 1][k]});
        }
    }
    return dp[n][m][k];
}
int main()
{
    fill_n(&dp[0][0][0], 100*100*100, -1);
    int a = solutiondp({1, 2, 3, 4, 5}, {5, 3, 1, 4, 2}, 5, 5, 1);
    cout << a;
}