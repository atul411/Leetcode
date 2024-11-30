#include<bits/stdc++.h>
using namespace std;
int solution(string str)
{
    int n = str.length();
    int dp[n + 1];
    fill(dp[0], n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    if (str[1] != '0')
    {
        dp[2]++;
    }
    if (str[0] - '0' == 1 or str[0] - '0' == 2 and str[1] - '0' <= 6)
    {
        dp[2]++;
    }
    for (int i = 3; i <= n; i++)
    {
        if (str[i-1] != 0)
        {
            dp[i] += dp[i - 1];
        }
        if(str[i-2] - '0' == 1 or str[i-2] - '0' == 2 and str[i-1] - '0' <= 6){
            dp[i] += dp[i-2];
        }
    }
    return dp[n];
}
int main()
{
    cout<<solution("1234");
}