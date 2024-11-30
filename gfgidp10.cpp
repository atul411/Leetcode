#include<bits/stdc++.h>

void bfs(GraphLinkedListImplementation graph, int level, int start)
{
    queue<int> q1, q2;
    q1.push(start);
    vector<bool> visted(graph.v, false);
    visted[start] = true;
    while ((q1.size() or q2.size()) and level)
    {
        
        if (q1.size())
        {
            while (!q1.empty())
            {
                int temp = q1.front();
                q1.pop();
                
                for (auto i : graph.arr[temp])
                {
                    if (visted[i] == false)
                    {
                        visted[i] = true;
                        q2.push(i);
                    }
                }
            }
        }
        else
        {
            while (!q2.empty())
            {
                int temp = q2.front();
                q2.pop();
                
                for (auto i : graph.arr[temp])
                {
                    if (visted[i] == false)
                    {
                        visted[i] = true;
                        q1.push(i);
                    }
                }
            }
        }
        cout << endl;
        level--;
    }

    while (!q2.empty())
    {
        cout << q2.front() << "\t";
        q2.pop();
    }
    while (!q1.empty())
    {
        cout << q1.front() << "\t";
        q1.pop();
    }
}
int main()
{
    GraphLinkedListImplementation graph = GraphLinkedListImplementation(6);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    int level = 2;
    bfs(graph, level, 0);
}