#include<bits/stdc++.h>

void printGrpah(GraphLinkedListImplementation graph, int src)
{
    queue<int> que;
    que.push(src);
    while (que.size())
    {
        int front = que.front();
        cout << front;
        for (auto i : graph.arr[front])
        {
            que.push(i);
        }
    }
}

GraphLinkedListImplementation clone(GraphLinkedListImplementation graph, int src)
{
    GraphLinkedListImplementation graph1(graph.v);
    queue<int> que;
    que.push(src);
    while (que.size())
    {
        int front = que.front();
        que.pop();
        for (auto i : graph.arr[front])
        {
            que.push(i);
            graph1.addEdge(front, i);
        }
    }
    return graph1;
}

int main()
{
    GraphLinkedListImplementation graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(0, 2);
    printGrpah(graph, 0);
    cout << "after clone " << endl;
    GraphLinkedListImplementation graph1 = clone(graph, 0);
    printGrpah(graph1, 0);
}