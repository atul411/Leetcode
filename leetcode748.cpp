#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string shortestCompletingWord(string licensePlate, vector<string> &words)
    {
        unordered_map<string, int> track_indices;
        for (int i = 0; i < words.size(); i++)
        {
            track_indices[words[i]] = i;
        }
        
        unordered_map<char, int> matching;
        for (int i = 0; i < licensePlate.size(); i++)
        {
            if (isalpha(licensePlate[i]))
            {
                matching[tolower(licensePlate[i])]++;
            }
        }
        string ans = string();
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].length() >= licensePlate.length() and is_completing(words[i], matching))
            {
                if (ans.empty())
                {
                    ans = words[i];
                }
                else if (ans.length() > words[i].length())
                {
                    ans = words[i];
                }
                else if (ans.length() == words[i].length() and track_indices[words[i]] < track_indices[ans])
                {
                    ans = words[i];
                }
            }
        }
        return ans;
    }

    bool is_completing(string str, unordered_map<char, int> umap)
    {
        for (int i = 0; i < str.size(); i++)
        {
            umap[str[i]]--;
        }
        for (auto a : umap)
        {
            if (a.second > 0)
            {
                return false;
            }
        }
        return true;
    }
};