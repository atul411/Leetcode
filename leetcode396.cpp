#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int sumRoate(vector<int> mArr)
    {
        int j = 0, ans = 0;
        for (auto i : mArr)
        {
            ans += j * i;
            j++;
        }
        return ans;
    }
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int n = nums.size(), sum = accumulate(nums.begin(), nums.end(), 0);
        int ans = sumRoate(nums), curr = ans;
        for (int i = 1; i < n; i++)
        {
            curr = curr - nums[n - i] * n + sum;
            ans = max(ans, curr);
        }
        return ans;
    }
};