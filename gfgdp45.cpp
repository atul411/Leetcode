#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int solution(vector<pair<int, int>> arr)
{
    int n = arr.size();
    int dp[n];
    fill_n(dp, n, 1);
    sort(arr.begin(), arr.end(), [](pii a, pii b){return a.second < b.second;});
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x = arr[i].first, y = arr[j].second;
            if (y < x and dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = INT_MIN;
    for(auto i: dp){
        ans = max(ans, i);
    }
    return ans;
}
int main()
{
    cout<<solution({{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90} });
}