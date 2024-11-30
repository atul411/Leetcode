#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> arr, int w)
{
    int n = arr.size();
    int dp[w + 1];
    fill_n(dp, w + 1, inf);
    dp[0] = 0;
    dp[1] = arr[0] == -1 ? inf : arr[0];
    for (int i = 2; i <= w; i++)
    {
        for (int j = 0; j < n && j + 1 <= i; j++)
        {

            dp[i] = dp[i - j - 1] != inf and arr[j] != -1 ? min(dp[i], arr[j] + dp[i - j - 1]) : dp[i];
        }
    }
    return dp[w] != inf ? dp[w] : -1;
}
int main()
{
    cout << solution({-1, -1, 4, 5, -1}, 5);
}