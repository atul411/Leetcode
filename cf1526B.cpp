#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> dp(1100);

bool solve(ll n) {
    if (n > 1099LL) {
        return true;
    }

    if (dp[n] == 1) {
        return true;
    } else if (dp[n] == 0) {
        return false;
    }

    if (n == 11 or n == 0) {
        dp[n] = 1;
        return true;
    }

    if (n < 11) {
        dp[n] = 0;
        return false;
    }
    int x = 11;
    while (x <= n) {
        bool temp = solve(n - x);
        if (temp) {
            dp[n] = 1;
            return true;
        }
        x *= 10;
        x += 1;
    }
    dp[n] = 0;
    return false;
}
void test_case() {
    ll n;
    cin >> n;
    if (solve(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    fill_n(&dp[0], 1100, -1);
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}