#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
public:
    int calculate(string s)
    {
        long long num = 0;
        char sign = '+';
        stack<long long> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (isspace(s[i]))
                continue;
            if (isdigit(s[i]))
            {
                num = num*10 + s[i] - '0';
            }
            else
            {
                if (sign == '+')
                {
                    st.push(num);
                }
                if (sign == '-')
                {
                    st.push(-num);
                }
                if (sign == '*')
                {
                    int last = st.top();
                    st.pop();
                    st.push(num * last);
                }
                if (sign == '/')
                {
                    int last = st.top();
                    st.pop();
                    st.push(last / num);
                }
                num = 0;
                sign = s[i];
            }
        }
        if (num != 0)
        {
            if (sign == '+')
            {
                st.push(num);
            }
            if (sign == '-')
            {
                st.push(-num);
            }
            if (sign == '*')
            {
                int last = st.top();
                st.pop();
                st.push(num * last);
            }
            if (sign == '/')
            {
                int last = st.top();
                st.pop();
                st.push(last / num);
            }
        }
        long long ans = 0;
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
