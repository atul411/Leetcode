#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        unordered_map<int, int> umap;
        vector<string> ans(score.size());
        for (int i = 0; i < score.size(); i++)
        {
            umap[score[i]] = i;
        }
        sort(score.begin(), score.end(), [](int a, int b)
             { return a > b; });
        for (int i = 0; i < score.size(); i++)
        {
            switch (i)
            {
            case 0:
                ans[umap[score[i]]] = "Gold Medal";
                break;
            case 1:
                ans[umap[score[i]]] = "Silver Medal";
                break;
            case 2:
                ans[umap[score[i]]] = "Bronze Medal";
                break;
            default:
                ans[umap[score[i]]] = to_string(i + 1);
                break;
            }
        }
        return ans;
    }
};