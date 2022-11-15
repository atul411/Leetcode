#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        priority_queue<pair<int, pair<int, int>>> pq;
        for (auto i : nums1)
        {
            for (auto j : nums2)
            {
                int sum = i + j;
                if (pq.size() < k)
                {
                    pq.push({sum, {i, j}});
                }
                else if (sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {i, j}});
                }
                else
                {
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        while (pq.size())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};