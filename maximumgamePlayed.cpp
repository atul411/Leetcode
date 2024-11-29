#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
    {
        return 1 + solution(n / 2);
    }

       return 1 + solution(n - 1);
    
}

int maxGameByWinner(int N)
{
    int dp[N];
    
    if (N == 1){
      return 0;
    }
     
    
    
    dp[0] = 1;   
    dp[1] = 2;
     
    
    
    int i = 1;
    while (dp[i++] < N){
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    if (dp[i-1] == N){
      return (i - 1);
    }
 
    
    
    
    
    return (i - 2);
}
int main()
{
    cout<<solution(1001)<<"\t"<<maxGameByWinner(1001);
}