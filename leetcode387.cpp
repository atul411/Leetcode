#include<bits/stdc++.h>

class Solution
{
    unordered_map<char, int> umap;

public:
    int firstUniqChar(string s)
    {
        for (auto ch : s)
        {
            umap[ch]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (umap[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};