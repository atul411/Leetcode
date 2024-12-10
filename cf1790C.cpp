#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<vector<int>>& arr, int& col) {
    int n = arr.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i][col]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[arr[i][col]] == 1) {
            return i;
        }
    }
    return -1;
}

void shiftRight(vector<vector<int>>& graph, int row, int col) {
    int n = graph.size();
    for (int i = n - 1; i > col; i--) {
        swap(graph[row][i], graph[row][i - 1]);
    }
}

void test_case() {
    int n;
    cin>>n;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; j++) {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int row = findIndex(graph, i);
        shiftRight(graph, row, i);
        if (row == 0) {
            graph[row][i] = graph[row + 1][i];
        } else {
            graph[row][i] = graph[row - 1][i];
        }
    }
    for (auto i : graph[0]) {
        cout << i << " ";
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