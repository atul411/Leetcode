#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

void dfs(vector<vector<pair<int, int>>> &graph, vector<bool> &visited, vector<int> &arr, int u, int v, int k) {
    if (u == v) {
        vector<int> temp(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            temp[i] = arr[i];
        }
        sort(temp.begin(), temp.end());
        // cout<<"arrived\n";
        if (temp.size() >= k)
            // cout << temp[temp.size() - k] << " ";
            ans = min(ans, temp[temp.size() - k]);
        return;
    }
    for (auto i : graph[u]) {
        if (visited[i.first] == false) {
            arr.push_back(i.second);
            // cout<<"got added "<<i.first<<"  parnet "<<u<<"  \n";
            visited[i.first] = true;
            dfs(graph, visited, arr, i.first, v, k);
            // cout<<"got removed "<<i.first<<"  \n";
            visited[i.first] = false;
            arr.pop_back();
        }
    }
}
void test_case() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    vector<bool> visited(n + 1);
    for (int i = 0; i < k; i++) {
        for (int i = 0; i <= n; i++) {
            visited[i] = false;
        }
        int u, v, q;
        cin >> u >> v >> q;
        visited[u] = true;
        vector<int> arr;
        dfs(graph, visited, arr, u, v, q);
        cout << ans << " ";
        ans = INT_MAX;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}