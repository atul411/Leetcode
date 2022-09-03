#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {

        if (nums.empty())
        {
            return vector<string>();
        }
        long lastNumebr = nums[0];
        string startString = to_string(nums[0]), endString = to_string(nums[0]);
        vector<string> ans;
        for (int i = 1; i < nums.size(); i++)
        {
            long diff = nums[i] - lastNumebr;
            if (diff != 1)
            {
                endString = to_string(lastNumebr);
                if (startString == endString)
                {
                    ans.push_back(startString);
                }
                else
                {
                    ans.push_back(startString + "->" + endString);
                }
                startString = to_string(nums[i]);
            }
            lastNumebr = nums[i];
        }
        endString = to_string(lastNumebr);
        if (startString == endString)
        {
            ans.push_back(startString);
        }
        else
        {
            ans.push_back(startString + "->" + endString);
        }
        return ans;
    }
};