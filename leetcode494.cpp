#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
class Solution
{
    using pii = pair<int, int>;
    map<pair<int, int>, int> mp;
    int ans = 0;

public:
    int helper(vi nums, int index, int target)
    {
        if (mp.count(pii(index, target)))
        {
            return mp[pii(index, target)];
        }
        if (index == -1)
        {
            return target == 0 ? 1 : 0;
        }
        mp[pii(index, target)] = helper(nums, index - 1, target - nums[index]) + helper(nums, index - 1, target + nums[index]);
        return mp[pii(index, target)];
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        return helper(nums, nums.size() - 1, target);
    }
};

