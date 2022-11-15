#include "library.h"

vi solution(GraphLinkedListImplementation graph, int src)
{
    vi level(graph.v);
    level[src] = 0;
    queue<int> que;
    que.push(src);
    vb visited(graph.v, false);
    visited[src] = true;
    while (que.size())
    {
        int temp = que.front();
        que.pop();
        for (auto i : graph.arr[temp])
        {
            if (!visited[i])
            {
                level[i] = level[temp] + 1;
                que.push(i);
            }
        }
    }
    return level;
}

int main()
{
    GraphLinkedListImplementation graph(8);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(1, 5);
    graph.addEdge(2, 5);
    graph.addEdge(2, 6);
    graph.addEdge(6, 7);
    vi ans = solution(graph, 0);
    for (int i = 0; i < 8; i++)
    {
        cout << " " << i << "   -->   " << ans[i] << endl;
    }
}