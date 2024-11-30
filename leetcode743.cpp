#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<int> dp(n, INT_MAX);
        dp[k - 1] = 0;
        unordered_map<int, vector<pair<int, int>>> graph;
        make_grpah(graph, times);
        calculate_distance(graph, dp, k);
        int max = *max_element(dp.begin(), dp.end());
        return max == INT_MAX ? -1 : max;
    }

    void make_grpah(unordered_map<int, vector<pair<int, int>>> &graph, vector<vector<int>> arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            vector<int> temp = arr[i];
            graph[temp[0] - 1].push_back({temp[2], temp[1] - 1});
        }
    }

    void calculate_distance(unordered_map<int, vector<pair<int, int>>> graph, vector<int> &dp, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pqi;
        pqi.push({0, k - 1});
        while (pqi.size())
        {
            auto front = pqi.top();
            pqi.pop();
            for (int i = 0; i < graph[front.second].size(); i++)
            {
                if (dp[graph[front.second][i].second] > front.first + graph[front.second][i].first)
                {
                    dp[graph[front.second][i].second] = front.first + graph[front.second][i].first;
                    pqi.push({front.first + graph[front.second][i].first, graph[front.second][i].second});
                }
            }
        }
    }
};