#include<bits/stdc++.h>
using namespace std;

int solutionWithoutdp(string str)
{
    int n = str.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans += stoi(str.substr(i, j - i + 1));
        }
    }
    return ans;
}

int solutionwithdp(string str)
{
    int n = str.size();
    int dp[n][n];
    fill_n(&dp[0][0], n * n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            dp[i][j] = i==j? str[i]-'0' : dp[i][j-1]*10 + (str[j]-'0');
        }
    }
    int ans =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans += dp[i][j];
        }
    }
    return ans;
}

int main()
{
    cout << solutionwithdp("1234");
}