#include<bits/stdc++.h>
using namespace std;
class Solution
{
    unordered_map<pair<string, string>, double> umap;
public:
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        for (int i = 0; i < equations.size(); i++)
        {
            umap.insert({make_pair(equations[i][0], equations[i][1]), values[i]});
        }
        vector<double> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i][0] == queries[i][1])
            {
                ans.push_back(1);
            }
            else if (umap.count(make_pair(queries[i][0], queries[i][1])))
            {
                ans.push_back(umap[make_pair(queries[i][0], queries[i][1])]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};