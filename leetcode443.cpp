#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int currLen = 0;
        vector<char> vect;
        char chr = chars[0];
        for (int i = 0; i < chars.size(); i++)
        {
            if (chars[i] == chr)
            {
                currLen++;
            }
            else
            {
                vect.push_back(chr);
                if (currLen != 1)
                {
                    for (auto ch : to_string(currLen))
                    {
                        vect.push_back(ch);
                    }
                }
                chr = chars[i];
                currLen = 1;
            }
        }
        if (currLen != 1)
        {
            for (auto ch : to_string(currLen))
            {
                vect.push_back(ch);
            }
        }
        chars = vect;
        return chars.size();
    }
};