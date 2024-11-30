#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestWord(vector<string> &words)
    {
        sort(words.begin(), words.end());
        string ans = string();
        unordered_set<string> st;
        for (string str : words)
        {
            if (str.length() == 1 or st.count(str.substr(0, str.length() - 1)))
            {
                st.insert(str);
                ans = str.length() > ans.length() ? str : ans;
            }
        }
        return ans;
    }
};