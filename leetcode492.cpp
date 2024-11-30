#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int a = sqrt(area);
        if (a * a == area)
        {
            return {a, a};
        }
        while (a >= 1 and (area % a) != 0)
        {
            a--;
        }
        int b = area / a;
        if (a > b)
        {
            return {a, b};
        }
        return {b, a};
    }
};