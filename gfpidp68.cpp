#include<bits/stdc++.h>
using namespace std;
int solution(vi arr)
{
    int n = arr.size();
    int dp[n];
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int ans = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                ans += dp[j];
            }
        }
        dp[i] = ans;
    }
    return accumulate(dp, dp+n, 0);
}
int main()
{
    cout<<solution({4, 3, 6, 5});
}