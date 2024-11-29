#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> vect;
        int n = ops.size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ops[i] == "C")
            {
                vect.pop_back();
            }
            else if (ops[i] == "D")
            {
                vect.push_back(vect.back() * 2);
            }
            else if (ops[i] == "+")
            {
                int size = vect.size();
                vect.push_back(vect[size - 1] + vect[size - 2]);
            }
            else
            {
                vect.push_back(stoi(ops[i]));
            }
        }
        for (auto i : vect)
        {
            ans += i;
        }
        return ans;
    }
};