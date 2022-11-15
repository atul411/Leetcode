#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        if (n < 2)
        {
            return false;
        }
        int temp = n % 2;
        n = n >> 1;
        while (n)
        {
            if ((n % 2) ^ temp == 0)
            {
                return false;
            }
            temp = n % 2;
            n = n >> 1;
        }
        return true;
    }
};