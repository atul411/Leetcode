#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr;
void dfs(int src, vector<bool> &processed, vector<vector<ll>> &graph, ll &temp) {
    if (processed[src] == false) {
        processed[src] = true;
        temp = min(temp, arr[src]);
        for (int i = 0; i < graph[src].size(); i++) {
            if (processed[graph[src][i]] == false) {
                dfs(graph[src][i], processed, graph, temp);
            }
        }
    }
}
int main() {
    long long n, m, first, second, ans = 0;
    cin >> n >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<vector<long long>> graph(n);
    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        graph[first - 1].push_back(second - 1);
        graph[second - 1].push_back(first - 1);
    }
    vector<bool> processed(n, false);
    for (int i = 0; i < n; i++) {
        long long temp = INT_MAX;
        dfs(i, processed, graph, temp);
        if (temp != INT_MAX) {
            ans += temp;
        }
    }
    cout << ans;
}