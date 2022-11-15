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
    //return 0 if there is only 1 player
    if (N == 1){
      return 0;
    }
     
    // for 0 games, 1 player is needed
    // for 1 game, 2 players are required
    dp[0] = 1;   
    dp[1] = 2;
     
    // loop until i-th Fibonacci number is 
    // less than or equal to N
    int i = 1;
    while (dp[i++] < N){
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    if (dp[i-1] == N){
      return (i - 1);
    }
 
    // result is (i - 2) because i will be
    // incremented one extra in while loop
    // and we want the last value which is
    // smaller than N, so one more decrement
    return (i - 2);
}
int main()
{
    cout<<solution(1001)<<"\t"<<maxGameByWinner(1001);
}