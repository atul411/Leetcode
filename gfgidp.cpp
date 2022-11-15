#include "library.h"

int solution(vi arr)
{
    int n = arr.size();
    pii dp[n];
    fill_n(dp, n, pii(1, 1));
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i] and dp[i].first < dp[j].second + 1)
            {
                dp[i].first = dp[j].second + 1;
            }
            if (arr[j] > arr[i] and dp[i].second < dp[i].first + 1)
            {
                dp[i].second = dp[j].first + 1;
            }
        }
    }
    int ans = max(dp[0].first, dp[0].second);
    for(auto u: dp){
        ans = max({ans, u.first, u.second});
    }
    return ans;
}

int main()
{
    cout<<solution({1, 5, 4});
}