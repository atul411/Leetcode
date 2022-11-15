#include "library.h"

int minEdgeBFS(GraphLinkedListImplementation graph, int u, int v)
{
    if (u == v)
        return 0;
    pqii pq;
    vi minDistant(graph.v, inf);
    vb visited(graph.v, false);
    minDistant[u] = 0;
    pq.push(u);
    visited[u] = true;
    while (pq.size())
    {
        int front = pq.top();
        pq.pop();
        for (auto i : graph.arr[front])
        {
            if (minDistant[i] > minDistant[front] + 1)
            {
                minDistant[i] = minDistant[front] + 1;
            }
            if (!visited[i])
            {
                visited[i] = true;
                pq.push(i);
            }
        }
    }
    return minDistant[v];
}

int solutiondfs(GraphLinkedListImplementation graph, int u, int v, vb &visited, vi track)
{
    visited[u] = true;
    track.push_back(u);
    if (u == v)
    {
        visited[u] = false;
        return 0;
    }
    int ans = 1e9;
    for (auto i : graph.arr[u])
    {
        if (!visited[i])
        {
            int temp = 1 + solutiondfs(graph, i, v, visited, track);
            ans = min(ans, temp);
        }
    }
    visited[u] = false;
    return ans;
}
int main()
{
    int n = 9;
    GraphLinkedListImplementation graph(n);
    graph.addEdge(0, 1);
    graph.addEdge(0, 7);
    graph.addEdge(1, 7);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 5);
    graph.addEdge(2, 8);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);
    graph.addEdge(6, 7);
    graph.addEdge(7, 8);
    int u = 0;
    int v = 5;
    vb visited(9, false);
    cout << minEdgeBFS(graph, u, v) << endl;
    vi track;
    cout << solutiondfs(graph, u, v, visited, track);
}