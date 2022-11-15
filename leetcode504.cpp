#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToBase7(int num)
    {
        string str = string();
        bool isNegative = num < 0;
        num = abs(num);
        while (num)
        {
            char ch = '0' + num % 7;
            str.push_back(ch);
            num /= 7;
        }
        if (isNegative)
        {
            str.push_back('-');
        }
        reverse(str.begin(), str.end());
        return str;
    }
};