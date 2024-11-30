#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};