#include <bits/stdc++.h>
using namespace std;

int allowedk1, allowedk2;
int64_t mod = 1e8;

int64_t dp[120][120][12][12];
int64_t solve(int n1, int n2, int k1, int k2) {
    if (n1 + n2 == 0) {
        return 1;
    }
    if (dp[n1][n2][k1][k2] != -1) {
        return dp[n1][n2][k1][k2];
    }
    int64_t x = 0;
    if (k1 > 0 and n1 > 0) {
        x = solve(n1 - 1, n2, k1 - 1, allowedk2);
    }
    int64_t y = 0;

    if (k2 > 0 and n2 > 0) {
        y = solve(n1, n2 - 1, allowedk1, k2 - 1);
    }
    dp[n1][n2][k1][k2] = (x % mod + y % mod) % mod;
    return dp[n1][n2][k1][k2];
}

void solve() {
    int64_t n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    allowedk1 = k1;
    allowedk2 = k2;
    fill_n(&dp[0][0][0][0], 120LL * 120LL * 12LL * 12LL, -1LL);
    int64_t ans = solve(n1, n2, k1, k2);
    cout << ans << "\n";
}
int main() {
    solve();
}