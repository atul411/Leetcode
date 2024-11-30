#include<bits/stdc++.h>
using namespace std;
int solutionDp(vi val, vi weight, int W, int n)
{
    int dp[W + 1][n + 1];
    fill(dp[0][0], W + 1, n + 1, 0);
    unordered_map<pair<int, int>, vector<int>> uamp;
    for(int i=0; i<=W; i++){
        uamp[pair<int, int>(0,i)].push_back(0);
    }
    for (int i = 1; i <= W; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = i >= weight[j - 1] ? max(val[j - 1] + dp[i - weight[j - 1]][j - 1], dp[i][j - 1]) : dp[i][j - 1];
        }
    }
    return dp[W][n];
}
int main(){
}