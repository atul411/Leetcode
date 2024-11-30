#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &nums)
    {
        stack<int> st1;
        queue<int> que;
        for (auto i : nums)
        {
            st1.push(i);
        }
        while (st1.size() or que.size())
        {
            vector<int> arr;
            while (que.size())
            {
                if (arr.empty())
                {
                    arr.push_back(que.front());
                }
                else if (que.front() != arr.back())
                {
                    arr.push_back(que.front());
                }
                else
                {
                    st1.push(que.front());
                }
                que.pop();
            }
            while (st1.size())
            {
                if (arr.empty())
                {
                    arr.push_back(st1.top());
                }
                else if(st1.top() != arr.back())
                {
                    arr.push_back(st1.top());
                }else{
                    que.push(st1.top());
                }
                st1.top();
            }
            if(arr.size()<3){
                return false;
            }
        }
        return true;
    }
};