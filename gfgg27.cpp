#include "library.h"

void solution(int src, int dst, vi track, vb &visited, GraphLinkedListImplementation graph)
{
    visited[src] = true;
    track.push_back(src);
    if (src == dst)
    {
        for (auto i : track)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
    else
    {
        for (auto i : graph.arr[src])
        {
            if (!visited[i])
            {
                solution(i, dst, track, visited, graph);
            }
        }
    }
    
    visited[src] = false;
}

int main()
{
    GraphLinkedListImplementation graph(4);

    graph.addEdge(0, 3);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 0);
    graph.addEdge(2, 1);
    vb visited(graph.v, false);
    vi track;
    solution(2,3, track, visited, graph);

}