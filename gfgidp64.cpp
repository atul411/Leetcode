#include "library.h"

int solution(vi arr, int v)
{
    int n = arr.size();
    int dp[v + 1];
    fill(dp[0], v + 1, inf);
    dp[0] = 0;
    for (int i = 1; i <= v; i++)
        for (int j = 0; j < n; j++)
            if (arr[j] <= i and dp[i - arr[j]] + 1 < dp[i])
                dp[i] = dp[i - arr[j]] + 1;
    return dp[v];
}

int main()
{
    cout<<solution( {9, 6, 5, 1}, 11);
}