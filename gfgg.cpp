#include "library.h"

int dfs(GraphLinkedListImplementation graph, int src)
{
    int temp = 0;
    for (auto i : graph.arr[src])
    {
        temp = max(temp, dfs(graph, i));
    }
    return temp+1;
}

int solution(vi parent)
{
    int v = parent.size();
    GraphLinkedListImplementation grpah(parent.size());
    for (int i = 1; i < v; i++)
    {
        grpah.addEdge(parent[i], i);
    }
    // for (auto i = 0; i < v; i++)
    // {
    //     cout<<i<<" --> ";
    //     for (auto j : grpah.arr[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    return dfs(grpah, 0);
}

int main()
{
    cout << solution({-1, 0, 1, 2, 3})-1;
}