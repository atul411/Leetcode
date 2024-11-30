#include<bits/stdc++.h>
using namespace std;
bool solution(GraphLinkedListImplementation grpah, vb &visited, int src, vb &recStack)
{
    if (!visited[src])
    {
        visited[src] = true;
        recStack[src] = true;
        for (auto i : grpah.arr[src])
        {
            if (!visited[i] and solution(grpah, visited, i, recStack))
            {
                return true;
            }
            else if (recStack[i] == true)
                return true;
        }
    }
    recStack[src] = false;
    return false;
}
int main()
{
    GraphLinkedListImplementation graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);
    vb visited(4, false);
    vb recStack(4, false);
    cout << solution(graph, visited, 0, recStack);
}
