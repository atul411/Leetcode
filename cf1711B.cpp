#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m, a, b;
    cin >> n >> m;
    vector<int> arr(n + 1);
    vector<int> degree(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vector<pair<int, int>> pairs;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        pairs.push_back({a, b});
        degree[a]++;
        degree[b]++;
    }
    if (m % 2 == 0) {
        printf("0\n");
        return;
    }

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (degree[i] % 2 != 0) {
            ans = min(ans, arr[i]);
        }
    }
    for (int i = 0; i < m; i++) {
        if (degree[pairs[i].first] % 2 == 0 and degree[pairs[i].second] % 2 == 0) {
            ans = min(ans, arr[pairs[i].first] + arr[pairs[i].second]);
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}