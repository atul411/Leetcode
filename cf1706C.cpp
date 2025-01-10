#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
    }
    priority_queue<int> pq;
    int ans = 0, last = INT_MAX;
    for (auto i : arr) {
        if (i != 0) {
            pq.push(i);
        }
    }
    while (pq.size()) {
        auto top = pq.top();
        pq.pop();
        if (top < last) {
            ans += top;
            last = top;
        } else {
            last--;
            ans += max(last, 0);
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