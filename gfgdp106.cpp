#include "library.h"

int solution(int n, int m){
    vi dp(n + 1, 0);
    dp[0] = 1;
    for(int i=1; i<=n;i++){
        for(int j=m; j<n; j++){
            if(i>=j){
                dp[i] += dp[i-j];
            }
        }
    }
    return dp[n];
}


int main(){
    cout<<solution(3,1);
}