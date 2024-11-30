#include<bits/stdc++.h>
using namespace std;
int dfs(GraphLinkedListImplementation graph, int src, vb &visited)
{
    visited[src] = true;
    int ans = 1;
    for (int i : graph.arr[src])
    {
        if (!visited[i])
        {
            return max(ans, 1 + dfs(graph, i, visited));
        }
    }
    return ans;
}
int solution(GraphLinkedListImplementation graph)
{
    int ans = inf;
    for (int i = 0; i < graph.v; i++)
    {
        vb visited(graph.v, false);
        int k = dfs(graph, i, visited);
        ans = min(ans, k);
    }
    return ans + 1;
}
vi solutionOptimized(GraphLinkedListImplementation graph)
{
    vi degree(graph.v, 0);
    for (int i = 0; i < graph.v; i++)
        degree[i] = graph.arr[i].size();
    queue<int> que;
    for (int i = 0; i < graph.v; i++)
    {
        if (degree[i] == 1)
            que.push(i);
    }
    int v = graph.v;
    while (v > 2)
    {
        int size = que.size();
        v -= size;
        for (int i = 0; i < size; i++)
        {
            int front = que.front();
            que.pop();
            for (auto j : graph.arr[front])
            {
                degree[j]--;
                if (degree[j] == 1)
                {
                    que.push(j);
                }
            }
        }
    }
    vi ans;
    while (que.size())
    {
        ans.push_back(que.front());
        que.pop();
    }
    return ans;
}
int main()
{
    GraphLinkedListImplementation g(6);
    g.addEdge(0, 3);
    g.addEdge(3, 0);
    g.addEdge(1, 3);
    g.addEdge(3, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 2);
    g.addEdge(4, 3);
    g.addEdge(3, 4);
    g.addEdge(5, 4);
    g.addEdge(4, 5);
    vi ans = solutionOptimized(g);
    for (auto i : ans)
    {
        cout << i << endl;
    }
}