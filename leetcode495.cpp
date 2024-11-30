#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ans = duration, size = timeSeries.size(), poisendUntil = timeSeries[0] + duration;
        for (int i = 1; i < size; i++)
        {
            if (poisendUntil < timeSeries[i])
            {
                ans += duration;
            }
            else
            {
                ans + = timeSeries[i] + duration - poisendUntil;
            }
            poisendUntil = timeSeries[i] + duration;
        }
    }
    return ans;
};