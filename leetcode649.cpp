#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        unordered_map<char, int> umap;
        for (char ch : senate)
        {
            umap[ch]++;
        }
        // if (umap['R'] > umap['D'])
        // {
        //     return "Radient";
        // }
        // if (umap['D'] > umap['R'])
        // {
        //     return "Dire";
        // }
        // if (senate[0] == 'R')
        // {
        //     return "Radient";
        // }
        // return "Dire";
        for (int i = 0; i < senate.size(); i++)
        {
            if (senate[i] == 'R')
            {
                umap['D']--;
                if (umap['D'] <= 0)
                {
                    return "Radient";
                }
            }
            else
            {
                umap['R']--;
                if (umap['R'] <= 0)
                {
                    return "Dire";
                }
            }
        }
        return string();
    }
};