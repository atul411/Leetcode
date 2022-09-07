#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double ans = -DBL_MAX;
        int start = 0, end = 0, sum = 0;
        while (end < nums.size())
        {
            sum += nums[end++];
            if (end - start == k)
            {
                ans = max(ans, sum * 1.0 / k);
                sum -= nums[start++];
            }
        }
        return ans;
    }
};