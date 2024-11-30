#include<bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution
{
public:
    int superPow(int a, vector<int> &b)
    {
        if (b.size() == 0)
            return 1;
        int x = b.back();
        b.pop_back();
        return (pow(superPow(a, b), 10) % 1337 * pow(a, x) % 1337) % 1337;
    }
    int pow(int a, int b)
    {
        if (b == 0)
        {
            return 1;
        }
        int temp = pow(a, b / 2);
        if (b % 2 == 0)
        {
            return ((temp % 1337) * (temp % 1337)) % 1337;
        }
        return ((a % 1337) * (temp % 1337 * temp % 1337) % 1337) % 1337;
    }

    int pow(int x, int y)
    {
        if (y == 0)
            return 1;
        int temp = pow(x, y / 2);
        int j = (temp % 1337) * (temp % 1337) % 1337;
        if (y & 1 == 0)
        {
            return j;
        }
        return ((x % 1337) * (j % 1337)) % 1337;
    }

    int sumperPowe(int x, vector<int> vect)
    {
        if (vect.size() == 0)
            return 1;
        int temp = vect.back();
        vect.pop_back();
        return (pow(superPow(x, vect), 10) % 1337 * pow(x, temp) % 1337) % 1337;
    }
};
