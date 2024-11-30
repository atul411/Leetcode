#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        auto itr = lower_bound(nums.begin(), nums.end(), target);
        auto isfound = binary_search(nums.begin(), nums.end(), target);
        return isfound ? itr - nums.begin() : -1;
    }
};