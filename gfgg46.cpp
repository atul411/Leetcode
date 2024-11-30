#include<bits/stdc++.h>

int dfs(GraphLinkedListImplementation graph, int u, int src, vb &visited)
{
    visited[src] = true;
    if (src == u)
        return true;
    for (auto i : graph.arr[src])
    {
        if (!visited[i] and dfs(graph, u, i, visited))
        {
            return true;
        }
    }
    return false;
}
bool solution(GraphLinkedListImplementation graph, int u, int v, int root)
{
    if (root == u or root == v)
        return true;
    int ans = false;
    for (auto i : graph.arr[root])
    {
        vb visited(graph.v, false);
        vb visited1(graph.v, false);
        ans = ans || (dfs(graph, u, i, visited) and dfs(graph, v, i, visited1));
    }
    return ans;
}

int main()
{
    GraphLinkedListImplementation graph(10);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(3,6);
    graph.addEdge(2,4);
    graph.addEdge(2,5);
    graph.addEdge(5,7);
    graph.addEdge(5,8);
    graph.addEdge(5,9);
    cout<<solution(graph, 2,6,1);
}