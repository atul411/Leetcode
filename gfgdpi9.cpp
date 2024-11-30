#include<bits/stdc++.h>
using namespace std;
void solution(Graph graph, int src)
{
    int v = graph.v;
    int dist[v];
    fill(dist[0], v, inf);
    dist[src] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        vector<bool> track(v, false);
        queue<int> que;
        que.push(src);
        while (!que.empty())
        {
            int a = que.front();
            que.pop();
            if (track[a])
            {
                continue;
            }
            track[a] = true;
            for (auto i : graph.arr)
            {
                if (i.u == a and dist[i.v] > dist[i.u] + i.weight)
                {
                    dist[i.v] = dist[i.u] + i.weight;
                }
                if (i.u == a)
                {
                    que.push(i.v);
                }
            }
        }
    }
    for(auto i=0; i<v; i++){
        cout<<i<<"\t"<<dist[i]<<endl;
    }
}
int main()
{
    Graph graph = Graph(5, 8);
    graph.addEdge(0, 1, -1);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 3);
    graph.addEdge(1, 3, 2);
    graph.addEdge(1, 4, 2);
    graph.addEdge(3, 2, 5);
    graph.addEdge(3, 1, 1);
    graph.addEdge(4, 3, -3);
    solution(graph, 0);
}