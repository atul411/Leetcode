#include <bits/stdc++.h>
using namespace std;

int solution(int n, int a, int b, int c)
{
    int dp[n + 1];
    fill_n(dp, n + 1, -1);
    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        if(i-a>=0 and dp[i-a] != -1){
            dp[i] = max(dp[i], dp[i-a]+1);
        }
        if(i-b>=0 and dp[i-b] != -1){
            dp[i] = max(dp[i], dp[i-b]+1);
        }
        if(i-c>=0 and dp[i-c] != -1){
            dp[i] = max(dp[i], dp[i-c]+1);
        }

    }
    return dp[n];
}

int main()
{
    cout<<solution(17, 1, 2,3);
}