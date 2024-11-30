#include<bits/stdc++.h>

int solution(vector<pii> arr, int n)
{
    if (n <= 0)
        return 0;
    return max(solution(arr, n - 2) + arr[n - 1].first, solution(arr, n - 1) + arr[n - 1].second);
}

int solutionDp(vector<pii> arr, int n)
{
    int dp[n + 1];
    fill(dp[0], n + 1, 0);
    dp[1] = arr[0].first;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 2] + arr[i - 1].first, dp[i - 1] + arr[i - 1].second);
    }
    return dp[n];
}

int main()
{
    int a = solutionDp({{3, 1}, {6, 5}, {8, 4}, {7, 5}, {6, 3}}, 5);
    cout << a;
}
