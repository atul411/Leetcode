#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long x, y, ans = 0;
    cin >> x >> y;
    long long a = 0 ^ x ^ y, b = 0;
    while ((a ^ x) == (b ^ y)) {
        ans++;
        a++;
        b++;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    // cin >> t;
    // while (t--) {
    //     test_case();
    // }
    int x = 3, y = 4;
    for (int i = 1; i <= 100; i++) {
        cout << (i ^ x) << "   " << (i ^ y) << "\n";
    }
}