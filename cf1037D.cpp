#include <bits/stdc++.h>
using namespace std;
#define pii pair<counter *, int>

struct counter {
    int index;
    counter(int index) {
        this->index = index;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<vector<pii>> graph(n + 1);
    vector<counter *> arr(n + 1);
    for (int i = 0; i <= n; i++) {
        arr[i] = new counter(0);
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back({arr[v], v});
        graph[v].push_back({arr[u], u});
    }
    vector<int> given, found;
    for (int i = 1; i <= n; i++) {
        int u;
        cin >> u;
        arr[u]->index = i;
        given.push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end(), [](pii &a, pii &b) {
            return a.first->index < b.first->index;
        });
    }

    queue<int> que;
    que.push(1);
    vector<bool> visited(n + 1, false);
    visited[1] = true;
    while (que.size()) {
        auto front = que.front();
        que.pop();
        found.push_back(front);
        for (auto i : graph[front]) {
            if (visited[i.second] == false) {
                visited[i.second] = true;
                que.push(i.second);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (given[i] != found[i]) {
            printf("NO");
            return;
        }
    }
    printf("YES");
}

int main() {
    solve();
}