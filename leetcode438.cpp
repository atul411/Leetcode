#include<bits/stdc++.h>
using namespace std;

class Solution
{
    using vi = vector<int>;

public:
    vector<int> findAnagrams(string s, string p)
    {
        vi ans, vi_s(26, 0), vi_p(26, 0);
        int j = 0, i = 0;
        for (i = 0; i < p.length(); i++)
        {
            vi_p[p[i] - 'a']++;
        }
        i = 0;
        while (j < s.length())
        {
            vi_s[s[j] - 'a']++;
            if (j - i + 1 == p.length())
            {
                if (vi_s == vi_p)
                {
                    ans.push_back(i);
                }
                vi_s[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};