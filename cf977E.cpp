#include <bits/stdc++.h>
using namespace std;

void dfs(int x, vector<vector<int>> &graph, vector<int> &temp, vector<bool> &visited) {
    if (visited[x] == false) {
        temp.push_back(x);
        visited[x] = true;
        for (auto i : graph[x]) {
            if (visited[i] == false) {
                dfs(i, graph, temp, visited);
            }
        }
    }
}

void solve() {
    int n, m, u, v;
    cin >> n >> m;
    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int ans = 0;
    vector<bool> visited(n + 1, false);
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (visited[i] == false) {
            temp.clear();
            dfs(i, graph, temp, visited);
            bool found = true;
            for (auto j : temp) {
                if (graph[j].size() != 2) {
                    found = false;
                    break;
                }
            }
            if (found) {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}