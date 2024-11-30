#include<bits/stdc++.h>
using namespace std;

class Solution
{
    using pqi = priority_queue<int, vector<int>, greater<int>>;

public:
    bool find132pattern(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return false;
        }
        stack<int> st;
        int s3 = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (s3 > nums[i])
            {
                return true;
            }
            else
            {
                while (st.size() and nums[i] > st.top())
                {
                    s3 = st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return false;
    }
};