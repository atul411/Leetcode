#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> umap;
        for (auto chr : magazine)
        {
            umap[chr]++;
        }
        for (auto chr : ransomNote)
        {
            if (umap[chr] > 0)
            {
                umap[chr]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};