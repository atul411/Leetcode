#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {
        int leftCount = 0, rightCount = 0, star = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                leftCount++;
            }
            if (s[i] == '*')
            {
                star++;
            }
            if (s[i] == ')')
            {
                if (leftCount)
                {
                    leftCount--;
                }
                else if (star == 0)
                {
                    return false;
                }
                else
                {
                    star--;
                }
            }
        }
        if (star < leftCount)
        {
            return false;
        }
        rightCount = 0, leftCount = 0, star = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ')')
            {
                rightCount++;
            }
            if (s[i] == '*')
            {
                star++;
            }
            if (s[i] == '(')
            {
                if (rightCount)
                {
                    rightCount--;
                }
                else if (star == 0)
                {
                    return false;
                }
                else
                {
                    star--;
                }
            }
        }
        if (star < rightCount)
        {
            return false;
        }
        return true;
    }
};