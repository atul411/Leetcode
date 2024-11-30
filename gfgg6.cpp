#include<bits/stdc++.h>

void dfs(int i, vector<bool> &visited, vi &temp, GraphLinkedListImplementation graph)
{
    visited[i] = true;
    temp.push_back(i);
    for (auto x : graph.arr[i])
    {
        if (visited[x] == false)
        {
            dfs(x, visited, temp, graph);
        }
    }
}
void bfs(int i, GraphLinkedListImplementation graph)
{
    int v = graph.v;
    vector<bool> visited(v, false);
    visited[i] = true;
    queue<int> que;
    que.push(i);
    while (que.size())
    {
        int a = que.front();
        que.pop();
        cout << a << endl;
        for (auto j : graph.arr[a])
        {
            if (visited[j] == false)
            {
                visited[j] = true;
                que.push(j);
            }
        }
    }
}

int solution(GraphLinkedListImplementation graph)
{
    int v = graph.v;
    for (int i = 0; i < v; i++)
    {
        vector<int> temp;
        vector<bool> visited(v, false);
        dfs(i, visited, temp, graph);
        if (temp.size() == v)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    GraphLinkedListImplementation graph(7);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(4, 1);
    graph.addEdge(6, 4);
    graph.addEdge(5, 6);
    graph.addEdge(5, 2);
    graph.addEdge(6, 0);
    vector<bool> visited(7, false);
    cout << solution(graph);
}