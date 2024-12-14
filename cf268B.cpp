#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long dp[n + 1];
    dp[0] = 0;
    for (long long i = 1; i <= n; i++) {
        dp[i] = (n - i + 1) + (n - i) * (i - 1);
    }
    long long ans = 0;
    for (long long i = 0; i <= n; i++) {
        ans += dp[i];
    }
    cout << ans << "\n";
}