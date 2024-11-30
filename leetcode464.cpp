#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal)
    {
        if (desiredTotal <= maxChoosableInteger)
        {
            return true;
        }
        int dp[desiredTotal + 1];
        fill_n(dp, maxChoosableInteger + 1, true);
        for (int i = maxChoosableInteger + 1; i <= desiredTotal; i++)
        {
            dp[i] = false;
            for (int j = 1; j <= maxChoosableInteger; j++)
            {
                if (!dp[i - j])
                {
                    dp[i] = true;
                }
            }
        }
        return dp[desiredTotal];
    }
};