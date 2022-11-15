#include <bits/stdc++.h>
using namespace std;

class Solution
{
    using vs = vector<string>;
    using vvs = vector<vs>;

public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        unordered_map<string, vector<set<string>>> umap;
        for (auto temp : accounts)
        {
            string name = temp[0];
            set<string> st(temp.begin() + 1, temp.end());
            if (umap.count(name))
            {
                bool flag = false;
                for (auto &a : umap[name])
                {
                    if (same(a, st))
                    {
                        flag = true;
                        a.insert(st.begin(), st.end());
                        break;
                    }
                }
                if (!flag)
                {
                    umap[name].push_back(st);
                }
            }
            else
            {
                umap[name].push_back(st);
            }
        }
        vvs ans;
        for (auto a : umap)
        {
            for (auto i : a.second)
            {
                vector<string> arr;
                arr.push_back(a.first);
                for (auto j : i)
                {
                    arr.push_back(j);
                }
                ans.push_back(arr);
            }
        }
        return ans;
    }

    bool same(set<string> st1, set<string> st2)
    {
        for (auto a : st1)
        {
            if (st2.count(a))
            {
                return true;
            }
        }
        return false;
    }
};