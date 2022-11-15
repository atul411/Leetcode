#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int differentCount = 0;
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (s[start] != s[end])
            {
                break;
            }
            start++, end--;
        }
        return isPalindrome(s, start + 1, end) or isPalindrome(s, start, end - 1);
    }
    bool isPalindrome(string s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++, end--;
        }
        return true;
    }
};