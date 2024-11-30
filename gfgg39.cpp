#include<bits/stdc++.h>
using namespace std;
int solution(vi arr)
{
    int n = arr.size();
    GraphLinkedListImplementation graph(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] and i != j and j != (i - 1) and j != (i + 1))
            {
                graph.addEdge(i, j);
            }
        }
        if (i > 0)
        {
            graph.addEdge(i, i - 1);
        }
        if (i + 1 < n)
        {
            graph.addEdge(i, i + 1);
        }
    }
    int dp[n];
    fill(dp[0], n, inf);
    dp[0] = 0;
    bool visited[n];
    fill(visited[0], n, false);
    visited[0] = true;
    queue<int> que;
    que.push(0);
    while (que.size())
    {
        int num = que.front();
        que.pop();
        for (auto i : graph.arr[num])
        {
            if (dp[i] > dp[num] + 1)
            {
                dp[i] = dp[num] + 1;
            }
            if (!visited[i])
            {
                visited[i] = true;
                que.push(i);
            }
        }
    }
    return dp[n - 1];
}
int main()
{
    cout << solution({5, 4, 2, 5, 0});
}