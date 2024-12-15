#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dp[n];
    dp[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] == arr[i + 1]) {
            dp[i] = dp[i + 1] + 1;
        } else {
            dp[i] = 0;
        }
    }
    int q, l, r;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        if (dp[l - 1] + l >= r) {
            printf("-1 -1\n");
        } else {
            cout << l << " " << l + dp[l - 1] + 1 << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}