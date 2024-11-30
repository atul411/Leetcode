#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (st.empty())
            {
                st.push(asteroids[i]);
            }
            else if ((st.top() < 0 and asteroids[i] < 0) or (st.top() > 0 and asteroids[i] > 0))
            {
                st.push(asteroids[i]);
            }
            else
            {
                if (abs(st.top()) == abs(asteroids[i]))
                {
                    st.pop();
                }
                else
                {
                    int temp = asteroids[i];
                    while (st.size())
                    {
                        if ((st.top() < 0 and temp > 0) or (st.top() > 0 and temp < 0))
                        {
                            if (abs(temp) > abs(st.top()))
                            {
                                st.pop();
                            }
                            else
                            {
                                temp = st.top();
                            }
                        }
                    }
                }
            }
        }

        vector<int> arr;
        while (st.size())
        {
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};