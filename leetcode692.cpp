#include <bits/stdc++.h>
using namespace std;

using pii = pair<string, int>;

class Solution
{
    static bool comprator(pii &a, pii &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }

public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> umap;
        for (int i = 0; i < words.size(); i++)
        {
            umap[words[i]]++;
        }
        vector<pii> arr;
        for (auto i : umap)
        {
            arr.push_back(i);
        }
        sort(arr.begin(), arr.end(), comprator);
        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};