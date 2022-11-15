#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int> arr){
    int n = arr.size();
    int dp[n];
    fill_n(dp, n, 1);
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(abs(arr[i]-arr[j]) == 1 and dp[j] + 1 > dp[i]){
                dp[i] = dp[j]+1;
            }
        }
    }
    int ans = INT_MIN;
    for(auto num: dp){
        ans = max(ans, num);
    }
    return ans;
}



int main()
{
    cout<<longestSubsequence({1, 2, 3, 2, 3, 7, 2, 1});
}