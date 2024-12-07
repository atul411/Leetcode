#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int, int>> st1, st2;
    int x[] = {a, a, -a, -a};
    int y[] = {b, -b, b, -b};
    for (int i = 0; i < 4; i++) {
        st1.insert({xk + x[i], yk + y[i]});
    }
    for (int i = 0; i < 4; i++) {
        st1.insert({xk + y[i], yk + x[i]});
    }
    for (int i = 0; i < 4; i++) {
        st2.insert({xq + x[i], yq + y[i]});
    }
    for (int i = 0; i < 4; i++) {
        st2.insert({xq + y[i], yq + x[i]});
    }
    int ans = 0;
    for (auto i : st1) {
        if (st2.count(i)) {
            ans++;
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