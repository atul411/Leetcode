#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, sum = 0, ans = INT_MAX;
    cin >> n;
    vector<int> dp(n + 1);
    string str;
    cin >> str;
    vector<int> mp1(50001, -1), mp2(50001, -1);
    mp1[0] = 0;
    mp2[0] = 0;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (str[i - 1] == '+') {
            sum++;
        } else {
            sum--;
        }
        if (sum >= 0 and mp2[sum] != -1) {
            ans = min(dp[i - 1] + 1, dp[mp2[sum]]);
        } else if (sum < 0 and mp1[abs(sum)] != -1) {
            ans = min(dp[i - 1] + 1, dp[mp1[abs(sum)]]);
        } else {
            ans = dp[i - 1] + 1;
            if (sum >= 0 and mp2[sum] == -1) {
                mp2[sum] = i;
            } else if (sum < 0 and mp1[abs(sum)] == -1) {
                mp1[abs(sum)] = i;
            }
        }
        dp[i] = ans;
    }
    cout << dp[n] << "\n";
}

int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}