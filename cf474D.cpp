#include <bits/stdc++.h>
using namespace std;

int64_t dp[1000006], k, mod = 1e9 + 7;
int64_t dp2[1000006];

void solve() {
    dp[0] = 1;
    for (int i = 1; i < 1000006; i++) {
        if (i - k >= 0) {
            dp[i] = (dp[i - 1] % mod + dp[i - k] % mod) % mod;
        } else {
            dp[i] = dp[i - 1];
        }
    }
    dp2[0] = dp[0];
    for (int i = 1; i < 1000006; i++) {
        dp2[i] = (dp2[i - 1] % mod + dp[i] % mod) % mod;
    }
}
void test_case() {  
    int64_t a, b;
    cin >> a >> b;
    int64_t ans = (dp2[b] - dp2[a - 1] + mod) % mod;
    cout << ans << "\n";
}

int main() {
    int64_t t;
    cin >> t >> k;
    fill_n(dp, 1000006, -1);
    fill_n(dp2, 1000006, -1);
    solve();
    while (t--) {
        test_case();
    }
}