#include<bits/stdc++.h>
using namespace std;
int solution(vi arr)
{
    int n = arr.size(), dp[n];
    fill(dp[0], n, 0);
    dp[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            dp[i] = -1;
            continue;
        }
        for (int j = i + 1; j < n and j <= i + arr[i]; j++)
        {
            dp[i] = dp[j] ;
        }
    }
    return dp[n - 1];
}
int main()
{
    cout << solution({3, 2, 0, 1});
}