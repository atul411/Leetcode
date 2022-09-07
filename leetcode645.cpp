#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_set<int> set;
        vector<int> ans;
        int n = nums.size();
        long long sum = 0, totalSum = n * (n + 1) / 2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
            {
                ans.push_back(nums[i]);
                continue;
            }
            sum = sum + nums[i];
            set.insert(nums[i]);
        }
        ans.push_back(totalSum - sum);
    }
};