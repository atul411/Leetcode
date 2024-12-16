#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll m, a, b, c, ans = 0;
    cin >> m >> a >> b >> c;
    ans += min(a, m);
    ans += min(b, m);
    if (m - a >= 0 and c >= 0) {
        ans += min(m - a, c);
        c -= (m - a);
    }
    if (m - b >= 0 and c >= 0) {
        ans += min(m - b, c);
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
