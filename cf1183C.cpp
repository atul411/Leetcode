#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int k, n, a, b;
    cin >> k >> n >> a >> b;
    if (n * b >= k) {
        printf("-1\n");
        return;
    }
    int low = 0, high = n, ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid * a + (n - mid) * b >= k) {
            high = mid - 1;
        } else {
            low = mid + 1;
            ans = mid;
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