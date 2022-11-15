#include <bits/stdc++.h>
using namespace std;

void newMann(int n)
{
    int dp[n];
    fill_n(dp, n, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i < n; i++)
    {
        dp[i] = 2 * dp[i - 1] + dp[i - 2];
    }
    for(auto i: dp){
        cout<<i<<endl;
    }
}

int main()
{
    newMann(110);
}