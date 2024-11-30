#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s2.length() < s1.length())
        {
            return false;
        }
        unordered_map<char, int> umap1, umap2;
        int n = s1.length(), m = s2.length();
        for (int i = 0; i < n; i++)
        {
            umap1[s1[i]]++;
        }
        int j = 0;
        while (j < m)
        {
            umap2[s2[j]]++;
            if (j >= n - 1)
            {
                if (umap1 == umap2)
                {
                    return true;
                }
                char ch = s2[j - n + 1];
                {
                    umap2[ch]--;
                }
            }
        }
        return false;
    }
};