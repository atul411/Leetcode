#include <bits/stdc++.h>
using namespace std;

struct counter {
    counter(int a) {
        this->a = a;
    }
    int a;
};

void dfs(vector<vector<int>> &graph, int curr, vector<counter *> &arr, counter *a) {
    if (arr[curr] == nullptr) {
        arr[curr] = a;
        a->a++;
    }
    for (auto i : graph[curr]) {
        if (arr[i] == nullptr) {
            dfs(graph, i, arr, a);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<counter *> arr(n + 1, nullptr);
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int count;
        cin >> count;
        int j = -1, curr;
        for (int i = 0; i < count; i++) {
            cin >> curr;
            if (j == -1) {
                j = curr;
            } else {
                graph[j].push_back(curr);
                graph[curr].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        struct counter *a = new counter(0);
        if (arr[i] == nullptr) {
            dfs(graph, i, arr, a);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i]->a << " ";
    }
}