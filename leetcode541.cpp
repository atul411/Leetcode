#include<bits/stdc++.h>

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        for (int i = 0; i < s.length() - k + 1; i + k)
        {
            int a = i / k;
            if (a % 2 == 0)
            {
                int start = i, end = i + k - 1;
                while (start < end)
                {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }
            }
        }
    }
};
