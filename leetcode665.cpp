#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
            {
                if (count)
                    return false;
                count++;
                if (i == 1)
                {
                    nums[0] = nums[1] = min(nums[0], nums[1]);
                    continue;
                }
                if (nums[i] == nums[i - 2])
                {
                    nums[i - 1] = nums[i - 2];
                }
                else if (nums[i] < nums[i - 2])
                {
                    nums[i] = nums[i - 1];
                }
                else
                {
                    nums[i - 1] = nums[i - 2];
                }
            }
        }
        return true;
    }
};