#include "library.h"

vi solution(Graph graph, int src)
{
    vi dist(graph.v);
    fill(dist[0], graph.v, 1);
    dist[src] = 0;
    for (int i = 1; i <= graph.v - 1; i++)
    {
        for (int j = 0; j < graph.arr.size(); j++)
        {
            Edge edge = graph.arr[j];
            if (dist[edge.u] != inf and dist[edge.u] + 1 < dist[edge.v])
            {
                dist[edge.v] = dist[edge.u] + 1;
            }
        }
    }
    for (int i = 0; i < graph.e; i++)
    {
        Edge edge = graph.arr[i];
        if (dist[edge.u] + 1 < dist[edge.v]){
            cout<<"it has cycle"<<endl;
        }
    }
    cout<<"it does not have negative cycle"<<endl;
    return dist;
}

int main()
{
    int v = 5;
    int e = 8;
    Graph graph(v, e);
    graph.addEdge(0, 1, -1);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 3);
    graph.addEdge(1, 3, 2);
    graph.addEdge(1, 4, 2);
    graph.addEdge(3, 2, 5);
    graph.addEdge(3, 1, 1);
    graph.addEdge(4, 3, -3);
    vi ans = solution(graph, 0);
    for (int i = 0; i < graph.v; i++)
    {
        cout << i << "\t\t" << ans[i] << endl;
    }
}