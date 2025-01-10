#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

void test_case() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    vector<int> ans(n);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    cout << "YES\n";
    for (int i = 0; i < m; i++) {
        pq.push({arr[i], i + 1});
        ans[i] = i + 1;
    }
    for (int i = m; i < n; i++) {
        auto top = pq.top();
        pq.pop();
        top.first += arr[i];
        pq.push(top);
        ans[i] = top.second;
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}