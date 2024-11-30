#include<bits/stdc++.h>


void solution(GraphLinkedListImplementation graph, int start, int end, vector<bool> &visited, int &ans)
{
    visited[start] = true;
    if (start == end)
    {
        ans++;
    }
    else
    {
        for (auto temp : graph.arr[start])
        {
            if (visited[temp] == false)
            {
                solution(graph, temp, end, visited, ans);
            }
        }
    }
    visited[start] = false;
}

int main()
{
    GraphLinkedListImplementation g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 4);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(2, 1);
    g.addEdge(3, 2);
    vector<bool> visited(g.v, false);
    int ans = 0;
    solution(g, 0, 4, visited, ans);
    cout << ans;
}