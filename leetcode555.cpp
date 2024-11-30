#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastBricks(vector<vector<int>> &wall)
    {
        int n = wall.size();
        unordered_set<int> dp[n];
        unordered_map<int, int> umap;
        for (int i = 0; i < wall.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < wall[0].size() - 1; j++)
            {
                sum += wall[i][j];
                dp[i].insert(sum);
                umap[sum]++;
            }
        }
        int freq = INT_MIN, number = 0;
        for (auto i : umap)
        {
            if (i.second > freq)
            {
                freq = i.second;
                number = i.first;
            }
        }
        return n - freq;
    }
};