#include<bits/stdc++.h>
using namespace std;
void dfs(GraphLinkedListImplementation graph, int start){
    cout<<start<<endl;
    for(auto u: graph.arr[start]){
        dfs(graph, u);
    }
}
int main()
{
    GraphLinkedListImplementation graph(100);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    dfs(graph, 1);
}