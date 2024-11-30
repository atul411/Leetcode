#include<bits/stdc++.h>
using namespace std;

int chordCnt(int A)
{

    
    int n = 2 * A;

    
    int dpArray[n + 1];
    fill_n(dpArray, n + 1, 0);
    dpArray[0] = 1;
    dpArray[2] = 1;
    for (int i = 4; i <= n; i += 2)
    {
        for (int j = 0; j < i - 1; j += 2)
        {

            dpArray[i] +=
                (dpArray[j] * dpArray[i - 2 - j]);
        }
    }

    
    return dpArray[n];
}

int solution(int n)
{
    int dp[2 * n + 1];
    fill_n(dp, 2 * n + 1, 0);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 3;
    for (int i = 4; i <= 2 * n; i++)
    {
        for (int j = 0; j <= i - 2; j++)
        {
            dp[i] += dp[j] + dp[i - j - 2];
        }
    }
    return dp[2 * n];
}
int main()
{
    cout << chordCnt(3)<<"\t"<<solution(3);
}