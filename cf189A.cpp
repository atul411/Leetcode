#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    fill_n(dp, n + 1, 0);
    dp[0] = 1;
    for (int i = 0; i <= n; i++) {
        int mx = 0;
        if (i - a >= 0) {
            mx = max(mx, dp[i - a]);
        }
        if (i - b >= 0) {
            mx = max(mx, dp[i - b]);
        }
        if (i - c >= 0) {
            mx = max(mx, dp[i - c]);
        }
        if (i >= min({a, b, c}) and mx != 0) {
            dp[i] = mx + 1;
        }
    }
    cout << dp[n] - 1 << "\n";
}