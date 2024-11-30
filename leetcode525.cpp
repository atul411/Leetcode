#include<bits/stdc++.h>

class Solution
{
    using pii = pair<int, int>;

public:
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> umap;
        int ans = 0, sum = 0;
        umap[0] = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] == 1 ? sum++ : sum--;
            if (umap.count(sum))
            {
                ans = max(ans, i - umap[sum]);
            }
            else
            {
                umap[sum] = i;
            }
        }
        return ans;
    }
};