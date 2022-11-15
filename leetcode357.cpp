#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNumbersWithUniqueDigits(int n)
    {
        if (n == 0)
            return 1;
        int dp[n + 1];
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            int x = 1;
            for (int j = 0; j < i; j++)
            {
                if (j == 0 or j == 1)
                {
                    x *= 9;
                }
                else
                {
                    x *= (10 - j);
                }
            }
            dp[i] = x + dp[i - 1];
        }
        return dp[n];
    }
};

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << countNumbersWithUniqueDigits(i) << endl;
    }
}