#include "library.h"

int solution(vi arr, int n)
{
    int dp[n + 1];
    fill(dp[0], n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i >= arr[j])
            {
                dp[i] += dp[i - arr[j]];
            }
        }
    }
    return dp[n];
}

int main()
{

    cout << solution({12, 3, 1, 9}, 14);
}