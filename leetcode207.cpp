#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    unordered_set<int> st;
    unordered_map<int, vector<int>> mp;

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        for (int i = 0; i < numCourses; i++)
        {
            mp[i] = vector(0,0);
        }
        for (auto i : prerequisites)
        {
            mp[i[0]].push_back(i[1]);
        }
        for (int i = 0; i < numCourses; i++)
        {
            if (!dfs(i))
                return false;
        }
        return true;
    }
    bool dfs(int x)
    {
        if (st.count(x))
            return false;
        if (mp[x].size() == 0)
            return true;
        st.insert(x);
        for(auto i: mp[x]){
            if(!dfs(i)) return false;
        }
        st.erase(x);
        mp[x] = vector(0,0);
        return true;
    }
};