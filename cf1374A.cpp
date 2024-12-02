#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void test_case(int t) {
    ll x, y, n;
    while (t--) {
        cin >> x >> y >> n;
        int ans = (n / x) * x + y;
        if (ans > n) {
            ans -= x;
        }
        cout << ans << " \n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}