#include<bits/stdc++.h>

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int count = 0, n = word.size();
        for (int i = 0; i < n; i++)
        {
            if (word[i] >= 'A' and word[i] <= 'Z')
            {
                count++;
            }
        }

        if (count == n or count == 0)
        {
            return true;
        }
        if (count == 1 and word[0] >= 'A' and word[0] <= 'Z')
        {
            return true;
        }
        return false;
    }
};