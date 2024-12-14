#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long ans = 0, n, last = 0;
    cin >> n;
    n = n / 2;
    for (int i = 1; i <= n; i++) {
        long long count = 4 * (2 * i);
        ans += count * i;
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