#include <bits/stdc++.h>
using namespace std;

class Solution
{
    using vvi = vector<vector<int>>;

public:
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        vvi temp[nums.size()];
        for (int i = 1; i < nums.size(); i++)
        {
            vvi a = vvi(1, vector<int>(1, nums[i]));
            temp[i] = a;
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[j] < nums[i])
                {
                    for (auto k : temp[j])
                    {
                        k.push_back(nums[i]);
                        temp[j].push_back(k);
                    }
                }
            }
        }
        vvi ans;
        for (auto i : temp)
        {
            for (auto j : i)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};