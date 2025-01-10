#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
void solve() {
    string str;
    cin >> str;
    int n = str.size();
    int64_t dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    if (str[0] == 'm' or str[0] == 'w') {
        printf("0");
        return;
    }
    for (int i = 2; i <= n; i++) {
        if (str[i - 1] == 'm' or str[i - 1] == 'w') {
            printf("0");
            return;
        }
        if (str[i - 1] != 'u' and str[i - 1] != 'n') {
            dp[i] = dp[i - 1];
        } else if (str[i - 1] == str[i - 2]) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        } else {
            dp[i] = dp[i - 1];
        }
    }
    cout << dp[n];
}

int main() {
    solve();
}