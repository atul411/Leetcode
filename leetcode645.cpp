#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_set<int> set;
        vector<int> ans, sol(2, 0);
        int n = nums.size();
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            arr[nums[i] - 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            switch (arr[i])
            {
            case 2:
                sol[0] = i + 1;
                break;
            case 0:
                sol[1] = i + 1;
                break;
            default:
                break;
            }
        }
        return sol;
    }
};