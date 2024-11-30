#include<bits/stdc++.h>
using namespace std;

void solution(vector<int> arr)
{
    int n = arr.size();
    int dp[n];
    fill_n(dp, n, -1);
    for (int i = 0; i < n; i++)
    {
        dp[i] = arr[i];
        for (int j = 1; j <= sqrt(i+1); j++)
        {
            if ((i + 1) % (j) == 0 and i+1 != j and dp[j-1]+arr[i]>dp[i])
            {
                dp[i] = dp[j-1] + arr[i];
            }
        }
    }
    for(auto i: dp){
        cout<<i<<"\t";
    }
}

int main()
{
    solution({2, 3, 1, 4, 6, 5});
}