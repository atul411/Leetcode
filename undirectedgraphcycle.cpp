#include "library.h"

void isCyclic(GraphLinkedListImplementation graph, int src, vb visited, int &ans)
{
    visited[src] = true;
    for (auto u : graph.arr[src])
    {
        if (!visited[u])
        {
            isCyclic(graph, u, visited, ans);
            // return true;
        }
        else if (u != src)
        {
            ans++;
            // return true;
        }
    }
    // return false;
}

int main()
{
    GraphLinkedListImplementation g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    vb visited(5, false);
    int ans = 0;
    isCyclic(g1, 0, visited, ans);
    cout<<ans<<endl;
}