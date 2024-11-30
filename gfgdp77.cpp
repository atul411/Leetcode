#include<bits/stdc++.h>
using namespace std;

void solution(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = i % 2 == 0 ? dp[i / 2] : dp[(i - 1) / 2] + dp[(i + 1) / 2];
    }
    for(auto i: dp){
        cout<<i<<"\t";
    }
}

int main()
{
    solution(100);
}