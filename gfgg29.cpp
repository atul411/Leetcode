#include<bits/stdc++.h>
using namespace std;
vi bfs(GraphLinkedListImplementation graph, int src, int k)
{
    vi dist(graph.v, inf);
    vb visited(graph.v, false);
    visited[src] = true;
    dist[src] = 0;
    queue<int> que;
    que.push(src);
    while (que.size())
    {
        int front = que.front();
        que.pop();
        for (int i : graph.arr[front])
        {
            if (dist[i] > dist[front] + 1)
            {
                dist[i] = dist[front] + 1;
            }
            if (!visited[i])
            {
                visited[i] = true;
                que.push(i);
            }
        }
    }
    vi ans;
    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] <= k)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
vi solution(GraphLinkedListImplementation graph, vi arr, int k)
{
    vvi matrix(arr.size());
    vi ans;
    for (int i = 0; i < arr.size(); i++)
    {
        matrix[i] = bfs(graph, arr[i], k);
        for(auto a: matrix[i])
        {
            cout<<a<<"  ";
        }
        cout<<endl;
    }
    for (int i = 0; i < matrix[0].size(); i++)
    {
        int ispresentinall = false;
        for (int j = 1; j < matrix.size(); i++)
        {
            ispresentinall = false;
            for (int k = 0; k < matrix[j].size(); k++)
            {
                if (matrix[j][k] == matrix[0][i])
                {
                    ispresentinall = true;
                }
            }
            if (ispresentinall == false)
            {
                break;
            }
        }
        if (ispresentinall)
        {
            ans.push_back(matrix[0][i]);
        }
    }
    return ans;
}
int main()
{
    GraphLinkedListImplementation graph(10);
    graph.addEdge(1, 0);
    graph.addEdge(0,3);
    graph.addEdge(0,8);
    graph.addEdge(2,3);
    graph.addEdge(3,5);
    graph.addEdge(3,6);
    graph.addEdge(3,7);
    graph.addEdge(4,5);
    graph.addEdge(5,9);
    vi arr = {1, 2, 4};
    int k = 3;
    solution(graph, arr, k);
}