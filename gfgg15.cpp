#include<bits/stdc++.h>

void dfs(GraphLinkedListImplementation graph, vb &visited, int start)
{
    visited[start] = true;
    for (auto num : graph.arr[start])
    {
        if (!visited[num])
        {
            dfs(graph, visited, num);
        }
    }
}
int solution(GraphLinkedListImplementation graph)
{
    int vertices = graph.v, ans = 0;
    vb visited(vertices, false);
    for (int i = 0; i < vertices; i++)
    {
        if (!visited[i])
        {
            ans++;
            dfs(graph, visited, i);
        }
    }
    return ans;
}

int main()
{
    GraphLinkedListImplementation graph = GraphLinkedListImplementation(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(3, 4);
    cout<<solution(graph);
}