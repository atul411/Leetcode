#include <bits/stdc++.h>
using namespace std;

bool check(int64_t mid, int64_t x, int64_t target) {
    int64_t ans = 0, i = 0;
    while (floor(mid / (pow(x, i))) > 0) {
        ans += floor(mid / (pow(x, i)));
        if (ans >= target) return true;
        i++;
    }
    if (ans >= target) return true;
    return false;
}

void solve() {
    int64_t n, k;
    cin >> n >> k;

    int64_t low = 1, high = 1e10, ans = 0;
    while (low <= high) {
        int64_t mid = (low + high) / 2;
        if (check(mid, k, n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}