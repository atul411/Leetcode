#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> st;
        string ans = "";
        for (int i = 0; i < path.length(); i++)
        {
            if (path[i] == '/')
                continue;
            string temp = "";
            while (path[i] != '/' and i != path.size())
            {
                temp += path[i];
                i++;
            }
            if (temp == ".")
                continue;
            if (temp == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else
            {
                st.push(temp);
            }
        }
        while (st.size())
        {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        return ans.size() == 0 ? "/" : ans;
    }
};