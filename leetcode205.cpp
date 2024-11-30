#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> keytovalue;
        unordered_map<char, char> valuetokey;
        for (int i = 0; i < s.size(); i++)
        {
            if (keytovalue.find(s[i]) != keytovalue.end())
            {
                if (keytovalue[s[i]] != t[i])
                    return false;
            }
            else if (valuetokey.find(t[i]) != valuetokey.end())
            {
                return false;
            }
            else
            {
                keytovalue[s[i]] = t[i];
                valuetokey[t[i]] = s[i];
            }
        }
        return true;
    }
};