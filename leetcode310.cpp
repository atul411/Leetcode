#include <bits/stdc++.h>
#include "library.h"
using namespace std;

class Solution
{
public:
    int vertices;
    vector<list<int>> adjList;
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
    {
        adjList.resize(n);
        int a[n];
        fill_n(a, n, 0);
        for (auto i : edges)
        {
            addEdge(i[0], i[1]);
            a[i[0]]++;
            a[i[1]]++;
        }
        queue<int> que;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                que.push(i);
            }
        }
        int v = n;
        while (v > 2)
        {
            int currqueSize = que.size();
            v = v - currqueSize;
            for (int i = 0; i < currqueSize; i++)
            {
                int front = que.front();
                que.pop();
                for (auto j : adjList[front])
                {
                    a[j]--;
                    if (a[j] == 1)
                    {
                        que.push(j);
                    }
                }
            }
        }
        vector<int> ans;
        while (que.size())
        {
            ans.push_back(que.front());
            que.pop();
        }
        return ans;
    }
};

int main()
{
}