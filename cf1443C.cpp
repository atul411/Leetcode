#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<int> &a, vector<int> &b, int mid) {
    int needed = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > mid) {
            needed += b[i];
        }
    }
    return needed <= mid;
}

void test_case() {
    int n;
    cin >> n;
    vector<int> delivery(n), selfService(n);
    for (auto &a : delivery) {
        cin >> a;
    }
    for (auto &b : selfService) {
        cin >> b;
    }
    int ans = 0, low = 1, high = 1e13;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (check(delivery, selfService, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}