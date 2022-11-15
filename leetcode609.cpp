#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<string, set<string>> umap;

public:
    vector<vector<string>> findDuplicate(vector<string> &paths)
    {
        for(auto i: )
    }

    void helper(string str)
    {
        int a = str.find_first_of(' ');
        string dir = str.substr(0, a), fileName = string();
        for (int i = a + 1; i < str.size(); i++)
        {
            if (str[i] == ' ')
            {
                int startParenthese = fileName.find_first_of('(');
                umap[fileName].insert(dir + fileName.substr(0, startParenthese));
                fileName = string();
            }
            else
            {
                fileName.push_back(str[i]);
            }
        }
    }
};