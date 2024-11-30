#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int n = arr.size();
    int dp[n];
    fill_n(dp, n, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int diff = abs(arr[i] - arr[j]);
            if ((diff == 0 or diff == 1) and dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = INT_MIN;
    for (auto num : dp)
    {
        ans = max(ans, num);
    }
    return ans;
}

int main()
{
    cout << solution({-2, -1, 5, -1, 4, 0, 3});
}