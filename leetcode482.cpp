#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        string ans;
        int counter = 0;
        list<char> lst;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '-')
                continue;
            if (k == counter)
            {
                lst.push_front('-');
                counter = 0;
            }
            lst.push_back(s[i]);
            counter++;
        }
        for (auto i : lst)
        {
            if (i == '-')
            {
                ans.push_back(i);
            }
            else
            {
                ans.push_back(toupper(i));
            }
        }
        return ans;
    }
};