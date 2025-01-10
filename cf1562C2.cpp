#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    vector<pair<int, int>> dp(n);
    int ans = 0;
    dp[0] = {arr[0], 0};
    if (arr[0] >= 0) {
        dp[0].second++;
        ans++;
    }
    for (int i = 1; i < n; i++) {
        dp[i] = {arr[i], 0};
        if (arr[i] >= 0) {
            dp[i].second++;
        }
        for (int j = 0; j < i; j++) {
            if (dp[j].first + arr[i] >= 0 and dp[j].second + 1 > dp[i].second) {
                dp[i] = {dp[j].first + arr[i], dp[j].second + 1};
                ans = max(ans, dp[j].second);
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}