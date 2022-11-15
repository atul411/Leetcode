#include "library.h"

void solution(vi arr)
{
    int n = arr.size(), sum = accumulate(arr.begin(), arr.end(), 0);
    bool dp[n+1][sum+1];
    fill(dp[0][0], n+1, sum+1, false);
    for (int i = 0; i < n+1; i++)
    {
        dp[i][0] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][arr[i-1]] = true;
        for (int j = 1; j <= sum; j++)
        {
            if(dp[i-1][j]){
                dp[i][j] = true;
                dp[i][j+arr[i-1]] = true;
            }
        }
    }
    for(int i=0; i<=sum; i++){
        if(dp[n][i]){
            cout<<i<<"\t";
        }
    }
}

int main()
{
    solution({2, 3, 4, 5, 6});
}