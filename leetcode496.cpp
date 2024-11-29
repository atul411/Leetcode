#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> umap;
        int nums2size = nums2.size(), nums1size = nums1.size();
        vector<int> ans;
        for (int i = 0; i < nums2size; i++)
        {
            umap[nums2[i]] = i;
        }
        for (int i = 0; i < nums1size; i++)
        {
            int found = false;
            for (int j = umap[nums1[i]] + 1; j < nums2size; j++)
            {
                if (nums2[j] > nums1[i])
                {
                    found = true;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if (!found)
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};