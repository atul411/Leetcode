#include "library.h"

bool isCyclic(GraphLinkedListImplementation graph, int src)
{
    int v = graph.v;
    int arr[v];
    fill(arr[0], v, -1);
    arr[src] = 0;
    queue<int> que;
    que.push(src);
    while (que.size())
    {
        int front = que.front();
        que.pop();
        for (auto i : graph.arr[front])
        {
            if (arr[i] == -1)
            {
                arr[i] = 1 - arr[front];
                que.push(i);
            }
            else if (arr[i] == arr[front])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    GraphLinkedListImplementation g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(0, 3);
    g1.addEdge(1, 0);
    g1.addEdge(1, 2);
    g1.addEdge(2, 1);
    g1.addEdge(2, 3);
    g1.addEdge(3, 0);
    g1.addEdge(3, 2);
    vb visited(5, false);
    int ans = 0;
    cout << isCyclic(g1, 0);
    cout << ans << endl;
}