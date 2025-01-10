#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n;
    cin >> n;
    set<int> st1, st2;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (y == 0) {
            st1.insert(x);
        } else {
            st2.insert(x);
        }
    }
    int ans = 0;
    for (int i : st1) {
        if (st2.count(i)) {
            ans += st1.size() + st2.size() - 2;
        }
    }
    for (auto i : st1) {
        if (st1.count(i + 2) and st2.count(i + 1)) {
            ans++;
        }
    }
    for (auto i : st2) {
        if (st2.count(i + 2) and st1.count(i + 1)) {
            ans++;
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