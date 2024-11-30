#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> arr(n, 0), sol(2, 0);
        for (int i = 0; i < n; i++)
        {
            arr[nums[i] - 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
            {
                sol[0] = i + 1;
            }

            if (arr[i] == 0)
            {
                sol[1] = i + 1;
            }
        }
        return sol;
    }
};