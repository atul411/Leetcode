#include <bits/stdc++.h>
using namespace std;
#define Long long long

void test_case() {
    Long n;
    cin >> n;
    vector<Long> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vector<Long> dp(n + 1, 0);
    Long ans = 1;
    dp[1] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j * j <= i; j++) {
            if (arr[i] > arr[j] and i % j == 0) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
            if (i % j == 0 and arr[i] > arr[i / j]) {
                dp[i] = max(dp[i / j] + 1, dp[i]);
            }
        }
        ans = max(ans, dp[i]);
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