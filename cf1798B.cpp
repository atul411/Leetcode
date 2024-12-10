#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int m, n, temp;
    cin >> m;
    vector<int> arr(50000 + 1);
    vector<vector<int>> graph(m);
    for (int i = 0; i < m; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            arr[temp]++;
            graph[i].push_back(temp);
        }
    }
    int ans[m];
    for (int i = 0; i < m; i++) {
        int curr = -1;
        for (auto j : graph[i]) {
            if (arr[j] == 1) {
                curr = j;
            }
            arr[j]--;
        }
        if (curr == -1) {
            printf("-1\n");
            return;
        }
        ans[i] = curr;
    }
    for (auto i : ans) {
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