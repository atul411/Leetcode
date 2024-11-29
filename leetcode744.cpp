#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        if (letters.back() - target <= 0)
        {
            return letters[0];
        }
        char ans;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] - target > 0)
            {
                ans = letters[i];
                break;
            }
        }
        return ans;
    }
};