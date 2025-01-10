#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long mod = 1e9 + 7;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> dp(n + 1, 1);
    dp[0] = 0;
    vector<vector<ll>> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                arr[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < k - 1; i++) {
        for (int j = n; j >= 1; j--) {
            ll curr = dp[j];
            for (ll k : arr[j]) {
                curr = (curr + dp[k]) % mod;
            }
            dp[j] = curr;
        }
    }
    int ans = 0;
    for (auto i : dp) {
        ans = (ans + i) % mod;
    }
    cout << ans << "\n";
}