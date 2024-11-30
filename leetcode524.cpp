#include<bits/stdc++.h>
using namespace std;
class Solution
{
    unordered_map<char, int> umap1;
public:
    string findLongestWord(string s, vector<string> &dictionary)
    {
        for (char ch : s)
        {
            umap1[ch]++;
        }
        string str = string();
        for (int i = 0; i < dictionary.size(); i++)
        {
            if (str.length() >= dictionary[i].length() and dictionary[i] < str)
            {
                continue;
            }
            if (isSubsequence(dictionary[i]))
            {
                str = dictionary[i];
            }
        }
    }
    bool isSubsequence(string str)
    {
    }
};