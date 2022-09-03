#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int largest = nums[0], secondlargest = nums[0];
        int index = -1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > largest)
            {
                index = i;
                secondlargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > secondlargest)
            {
                secondlargest = nums[i];
            }
            else
            {
                if (largest == secondlargest)
                {
                    secondlargest = nums[i];
                }
            }
        }
        return largest >= 2 * secondlargest ? index : -1;
    }
};