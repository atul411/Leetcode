#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int i, int j, int k, vector<vector<int>> &dp)
{
    if (i >= j)
    {
        return 0;
    }
    else if (arr[j] - arr[i] <= k)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = 1 + min(solution(arr, i + 1, j, k, dp), solution(arr, i, j - 1, k, dp));
    return dp[i][j];
}

int main()
{
    cout << solution({1, 3, 4, 9, 10, 11, 12, 17, 20}, 0, 8, vector<vector<int>> dp(9, vector<int>(9, 0)));
}