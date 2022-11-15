#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
    }
    bool solve(vector<int> nums, int i, int sum, int k)
    {
        if (sum != 0 and sum % k == 0)
        {
            return true;
        }
        if (i < 0)
        {
            return false;
        }
        if (sum != 0)
        {
            return solve(nums, i - 1, sum + nums[i], k);
        }
        return solve(nums, i - 1, sum + nums[i], k) or solve(nums, i - 1, sum, k);
    }
};

class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_set<int> st;
        int previousSum = 0, currSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            if (st.count(currSum % k))
            {
                return true;
            }
            currSum %= k;
            st.insert(previousSum);
            previousSum = currSum;
        }
        return false;
    }
};