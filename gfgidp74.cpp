#include "library.h"

int solution(int n)
{
    int dp[n + 1];
    dp[1] = 2;
    dp[2] = 3;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int countStrings(int n)
{
    int a = 1, b = 1;
    for (int i = 1; i < n; i++)
    {
        // Here we have used the temp variable because we
        // want to assign the older value of a to b
        int temp = a + b;
        b = a;
        a = temp;
    }
    return a + b;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin>>n;
        cout << solution(n) << "\t\t" << countStrings(n)<<endl;
    }
}