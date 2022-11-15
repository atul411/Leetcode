#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        stack<int> st1;
        stack<int> st2;
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--)
        {
            st1.push(nums[i]);
        }
        vector<int> arr(n, -1);
        for (int i = n - 1; i >= 0; i--)
        {
            while (st1.size())
            {
                if (st1.top() > nums[i])
                {
                    arr[i] = st1.top();
                    break;
                }
                st2.push(st1.top());
                st1.pop();
            }
            while (i-1>=0 and nums[i]>nums[i-1] and st2.size())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        return arr;
    }
};