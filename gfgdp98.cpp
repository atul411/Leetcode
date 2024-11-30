#include<bits/stdc++.h>

int solution(vi arr)
{
    int n = arr.size();
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] > 0 and arr[i - 1] < 0) or (arr[i] < 0 and arr[i - 1] > 0))
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }
    return *max_element(dp, dp + n);
}

int cal(int a, int b){
    return a>b;
}
int main()
{
    vi a = {-5, -1, -1, 2, -2, -3};
    cout << solution({-5, -1, -1, 2, -2, -3});
}