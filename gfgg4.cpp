#include "library.h"

void solution(GraphLinkedListImplementation graph, int src, vb &visited, stack<int> &st)
{
    visited[src] = true;
    for (auto i : graph.arr[src])
    {
        if (!visited[i])
        {
            solution(graph, i, visited, st);
        }
    }
    st.push(src);
}

int main()
{
    stack<int> ans = solution(graph, 0, visited, stack<)
}