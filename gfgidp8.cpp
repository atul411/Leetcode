#include<bits/stdc++.h>

bool solution(unordered_map<int, set<int>> &graph, int k)
{
    bool isDegerated = false;
    for (auto i : graph)
    {
        if (i.second.size() < k)
        {
            isDegerated = true;
            int key = i.first;
            for (auto j : i.second)
            {
                graph[j].erase(key);
            }
            graph.erase(key);
        }
    }
    if (isDegerated)
    {
        return solution(graph, k);
    }
    return isDegerated;
}

int main()
{
    int k = 3;
    unordered_map<int, set<int>> g1;
    for (int i = 0; i < 9; i++)
    {
        g1[i] = {};
    }
    g1[0].insert(1);
    g1[0].insert(2);
    g1[1].insert(2);
    g1[1].insert(5);
    g1[2].insert(3);
    g1[2].insert(4);
    g1[2].insert(5);
    g1[2].insert(6);
    g1[3].insert(4);
    g1[3].insert(6);
    g1[3].insert(7);
    g1[4].insert(6);
    g1[4].insert(7);
    g1[5].insert(6);
    g1[5].insert(8);
    g1[6].insert(7);
    g1[6].insert(8);
    solution(g1, k);
    for (auto i : g1)
    {
        cout << i.first << "---\t";
        for (auto j : i.second)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
}