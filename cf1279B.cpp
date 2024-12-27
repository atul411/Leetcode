#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test_case() {
    int n, s;
    cin >> n >> s;
    vector<ll> arr(n), dp(n);
    for (auto &x : arr) cin >> x;

    dp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        dp[i] = dp[i - 1] + arr[i];
    }
    if (dp[n - 1] <= s) {
        printf("0\n");
        return;
    }
    ll ans = 0, curr = 0, index = -1;
    for (int i = 0; i < n; i++) {
        curr = s;
        if (i == 0) {
            curr = s;
        } else {
            curr -= dp[i - 1];
        }
        if (curr < 0) {
            break;
        }
        auto upperBound = upper_bound(dp.begin() + i + 1, dp.end(), dp[i] + curr);
        if (upperBound == dp.end()) {
            ans = n - 1;
            index = i;
        } else {
            ll second = i + (upperBound - (dp.begin() + i));
            if (second - 1 > ans) {
                ans = max(ans, second - 1);
                index = i;
            }
        }
    }
    cout << index + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}