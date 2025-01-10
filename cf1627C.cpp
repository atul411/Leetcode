#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> mp;

void dfs(vector<vector<pair<int, int>>>& graph, int last, int curr) {
    for (int i = 0; i < graph[curr].size(); i++) {
        if (graph[curr][i].second == -1) {
            if (last == 2) {
                graph[curr][i].second = 5;
                int a = last, b = graph[curr][i].first;
                if (a > b) {
                    swap(a, b);
                }
                mp[{a, b}] = 5;
                dfs(graph, 5, graph[curr][i].first);
            } else {
                graph[curr][i].second = 2;
                dfs(graph, 5, graph[curr][i].first);
                int a = last, b = graph[curr][i].first;
                if (a > b) {
                    swap(a, b);
                }
                mp[{a, b}] = 2;
            }
        }
    }
}

void test_case() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> degree(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        degree[x]++;
        degree[y]++;
        graph[x].push_back({y, -1});
        graph[y].push_back({x, -1});
    }
    int x = 0;
    for (int i = 1; i < n; i++) {
        if (degree[i] == 1) {
            x = i;
            break;
        }
    }
    dfs(graph, 5, x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}