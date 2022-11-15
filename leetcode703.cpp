#include <bits/stdc++.h>
using namespace std;

struct comprator
{
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

class KthLargest
{
    priority_queue<int, vector<int>, comprator> pqi;
    int k;

public:
    KthLargest(int k, vector<int> &nums)
    {
        for (auto i : nums)
        {
            pqi.push(i);
            if (pqi.size() > k)
            {
                pqi.pop();
            }
        }
        this->k = k;
    }

    int add(int val)
    {
        pqi.push(val);
        if (pqi.size() > k)
        {
            pqi.pop();
        }
        return pqi.top();
    }
};