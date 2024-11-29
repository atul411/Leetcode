#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<int, vector<int>> umap;

public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        for (auto i : prerequisites)
        {
            umap[i[0]].push_back(i[1]);
        }
        if(isCyclic(numCourses))
            return vector<int>();
        vector<int> st;
        vector visited(numCourses, false);
        for (int i = 0; i < numCourses; i++)
        {
            helper(st, visited, i);
        }
        reverse(st.begin(), st.end());
        return st;
    }

    void helper(vector<int> &st, vector<bool> &visied, int start)
    {
        if (visied[start])
            return;
        visied[start] = true;
        for (auto i : umap[start])
        {
            helper(st, visied, i);
        }
        st.push_back(start);
    }

    bool isCyclicUtil(int v, bool visited[], bool recStack[])
    {
        if (visited[v] == false)
        {
            visited[v] = true;
            recStack[v] = true;
            
            for (auto i = umap[v].begin(); i != umap[v].end(); ++i)
            {
                if (!visited[*i] && isCyclicUtil(*i, visited, recStack))
                    return true;
                else if (recStack[*i])
                    return true;
            }
        }
        recStack[v] = false;
        return false;
    }
    bool isCyclic(int v)
    {
        int V = v;
        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
        for (int i = 0; i < V; i++)
            if (!visited[i] && isCyclicUtil(i, visited, recStack))
                return true;

        return false;
    }
};