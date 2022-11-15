#include <bits/stdc++.h>
using namespace std;

class MapSum
{

    unordered_map<string, int> umap;

public:
    MapSum()
    {
        umap.clear();
    }

    void insert(string key, int val)
    {
        umap[key] = val;
    }

    int sum(string prefix)
    {
        int sum = 0;
        for (auto i : umap)
        {
            if (i.first.size() >= prefix.size() and i.first.substr(0, prefix.size()) == prefix)
            {
                sum += i.second;
            }
        }
        return sum;
    }
};