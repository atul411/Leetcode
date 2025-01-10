#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    int mx = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    sum -= mx;
    if (mx >= sum) {
        cout << sum << "\n";
    } else {
        cout << (mx + sum) / 2 << "\n";
    }
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pq.push({arr[i], i});
    }
    while (pq.size() >= 2) {
        auto top1 = pq.top();
        pq.pop();
        auto top2 = pq.top();
        pq.pop();
        cout << top1.second + 1 << " " << top2.second + 1 << "\n";
        top1.first--;
        top2.first--;
        if (top1.first > 0) {
            pq.push(top1);
        }
        if (top2.first > 0) {
            pq.push(top2);
        }
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}