#include<bits/stdc++.h>

class Solution
{
    unordered_map<int, vector<int>> umap;

public:
    Solution(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            umap[nums[i]].push_back(i);
        }
        srand(time(0));
    }

    int pick(int target)
    {
        int random = rand() % umap[target].size();
        return umap[target][random];
    }
};