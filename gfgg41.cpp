#include<bits/stdc++.h>
using namespace std;
int solution(int x, int y)
{
    int dp[y + 1];
    dp[x] = 0;
    for (int i = x - 1; i >= 0; i--)
    {
        dp[i] = dp[i + 1] + 1;
    }
    for (int i = x + 1; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = dp[i / 2];
        }
        else
        {
            dp[i] = dp[(i + 1) / 2]+2;
        }
    }
    return dp[y];
}
int main()
{
    cout<<solution(2,5);
}