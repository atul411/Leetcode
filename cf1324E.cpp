#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n, h, l, r;

int solve(int start, int j) {
}

void solve() {
    cin >> n >> h >> l >> r;
    arr.resize(n);
    int dp[n + 1][h + 1];
    fill_n(&dp[0][0], (n + 1) * (h + 1), INT_MIN);
    for (int i = 0; i <= h; i++) {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++) {
        if (i >= l and i <= r) {
            dp[]
        }
    }
}

int main() {
    solve();
}