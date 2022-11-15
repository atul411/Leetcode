#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1];
        if (arr[i] - arr[i - 1] < k)
        {
            if (i >= 2)
            {
                dp[i] = dp[i - 2] + arr[i] + arr[i - 1];
            }
            else
            {
                dp[i] = arr[i] + arr[i-1];
            }
        }
    }
    return *max_element(dp, dp+n);
}
void abc(int &x)
{
}

int main()
{
    cout << solution({5, 15, 10, 300},12);
}