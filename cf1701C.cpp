#include <bits/stdc++.h>
using namespace std;

bool check(int64_t mid, vector<int64_t> &people, int64_t n) {
    int64_t needed = 0, available = 0;
    for (int i = 1; i <= n; i++) {
        if (people[i] <= mid) {
            available += (mid - people[i]) / 2;
        } else {
            needed += (people[i] - mid);
        }
    }
    return available >= needed;
}

void test_case() {
    int64_t n, m;
    cin >> n >> m;
    vector<int64_t> arr(m);
    for (auto &x : arr) cin >> x;
    vector<int64_t> people(n + 1);
    for (auto x : arr) {
        people[x]++;
    }
    int64_t low = 0, high = 1e7, ans = 0;
    while (low <= high) {
        int64_t mid = (low + high) / 2;
        bool possible = check(mid, people, n);
        if (possible) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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