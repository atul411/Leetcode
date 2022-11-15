#include "library.h"

class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        int dp[n], ans = 0;
        fill_n(dp, n, false);
        queue<int> que;
        for (int i = 0; i < n; i++)
        {
            if (!dp[i])
            {
                ans++;
                dp[i] = true;
                for (int j = 0; j < n; j++)
                {
                    if (isConnected[i][j] and !dp[j])
                    {
                        que.push(j);
                        dp[j] = true;
                    }
                }
                while (que.size())
                {
                    int front = que.front();
                    que.pop();
                    for (int i = 0; i < n; i++)
                    {
                        if (isConnected[front][i] and !dp[i])
                        {
                            que.push(i);
                        }
                    }
                }
            }
        }
        return ans;
    }
};