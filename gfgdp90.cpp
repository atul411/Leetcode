#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m)
{
    int dp[n+1];
    fill_n(dp, n+1, 0);
    for(int i=1; i<=n; i++){
        if(i<m){
            dp[i] = 1;
        }
        if(i==m){
            dp[i] = 2;
        }
        if(i>m){
            dp[i] = dp[i-m]+dp[i-1];
        }
    }
    return dp[n];


    if (n <= 0)
        return 0;
    if (n < m)
    {
        return 1;
    }
    if (n == m)
        return 2;
    return solution(n - 1, m) + solution(n - m, m);
}

int main()
{
    cout << solution(4, 4);
}