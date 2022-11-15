#include<bits/stdc++.h>
using namespace std;


int solution(vector<int> arr, int n){
    if(n<=0)
        return 0;
    return max(arr[n-1]+solution(arr, n-2), solution(arr, n-1));
}

int solutionusingdp(vector<int> arr){
    int n = arr.size();
    int dp[n+1];
    fill_n(dp, n+1, 0);
    dp[1] = arr[0];
    for(int i=2; i<=n; i++){
        dp[i] = max(arr[i-1]+dp[i-2], dp[i-1]);
    }
    return dp[n];
}


int main(){
    cout<<solutionusingdp({6, 7, 1, 3, 8, 2, 4});
}