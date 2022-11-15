#include "library.h"

void bfs(GraphLinkedListImplementation &parent, GraphLinkedListImplementation &transpose, int start, vb &visitd);

void solution(GraphLinkedListImplementation parent, GraphLinkedListImplementation &transpose)
{
    vb visited(parent.v);
    for (int i = 0; i < parent.v; i++)
    {
        if (visited[i] == false)
        {
            bfs(parent, transpose, i, visited);
        }
    }
}

void bfs(GraphLinkedListImplementation &parent, GraphLinkedListImplementation &transpose, int start, vb &visitd)
{
    queue<int> que;
    que.push(start);
    visitd[start] = true;
    while (que.size())
    {
        int front = que.front();
        que.pop();
        for (auto node : parent.arr[front])
        {
            transpose.addEdge(node, front);
            if (!visitd[node])
            {
                que.push(node);
            }
            /**
             * @brief marking visited true out of if block to make it safe.
             *
             */
            visitd[node] = true;
        }
    }
}
void printgraph(GraphLinkedListImplementation graph)
{
    for (int i = 0; i < graph.v; i++)
    {
        cout << i << "--> ";
        for (auto j : graph.arr[i])
        {
            cout << j << "   ";
        }
        cout << endl;
    }
}

int main()
{
    GraphLinkedListImplementation parent(5), transpose(5);
    parent.addEdge(0, 1);
    parent.addEdge(0, 4);
    parent.addEdge(0, 3);
    parent.addEdge(2, 0);
    parent.addEdge(3, 2);
    parent.addEdge(4, 1);
    parent.addEdge(4, 3);
    solution(parent, transpose);
    cout << "parent graph" << endl;
    printgraph(parent);
    cout << "transpose graph" << endl;
    printgraph(transpose);
}