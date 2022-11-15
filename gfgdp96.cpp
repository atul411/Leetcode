#include "library.h"

int solution(vi arr, int i, int j)
{
    if (i > j)
    {
        return 0;
    };

    int a = solution(arr, i + 1, j);
    int b = solution(arr, i, j - 1);
    int x = i + arr.size() - 1 - j;
    return max((x + 1) * arr[i] + a, (x + 1) * arr[j] + b);
}
vii dp;
int solutionUsingDp(vi arr, int i, int j)
{
    if (i > j)
    {
        return 0;
    }
    int a = dp[i + 1][j] != 0 ? dp[i + 1][j] : solution(arr, i + 1, j);
    int b = dp[i][j - 1] != 0 ? dp[i][j - 1] : solution(arr, i, j - 1);
    int x = i + arr.size() - 1 - j;
    return max((x + 1) * arr[i] + a, (x + 1) * arr[j] + b);
}

int main()
{
    dp = vii(10, vi(10, 0));
    cout<<solutionUsingDp( { 1, 3, 1, 5, 2 }, 0, 4);
}