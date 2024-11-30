#include<bits/stdc++.h>
enum Color
{
    WHITE,
    GRAY,
    BLACK
};

bool solution(GraphLinkedListImplementation graph, int src, vector<Color> &color)
{
    color[src] = GRAY;
    for (auto num : graph.arr[src])
    {
        if (color[num] == GRAY)
            return true;
        if (color[num] == WHITE and solution(graph, num, color))
            return true;
    }
    color[src] = BLACK;
    return false;
}

int main()
{
    GraphLinkedListImplementation graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);
    vector<Color> color;
    for (int i = 0; i < 4; i++)
    {
        color.push_back(WHITE);
    }
    cout << solution(graph, 0, color);
}