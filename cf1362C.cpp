#include <bits/stdc++.h>
using namespace std;

int64_t bitcount(int64_t n) {
    int64_t a = n * 2LL - 1LL;
    return a;
}

void test_case() {
    int64_t n, ans = 0, pos = 0;
    cin >> n;
    int64_t temp = n;
    while (n > 0) {
        if ((n & 1) == 1) {
            ans += bitcount(1LL << pos);
        }
        pos++;
        n >>= 1LL;
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