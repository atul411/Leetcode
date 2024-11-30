#include<bits/stdc++.h>
using namespace std;
class Solution
{
    unordered_map<char, int> umap;
public:
    int longestPalindrome(string s)
    {
        int ans = 0;
        for (auto chr : s)
        {
            if (umap[chr] == 1)
            {
                ans += 2;
                umap[chr]--;
            }
            else
            {
                umap[chr]++;
            }
        }
        bool isOdd = false;
        for (auto i : umap)
        {
            if (i.second == 1)
            {
                isOdd = true;
            }
        }
        return isOdd ? ans + 1 : ans;
    }
};