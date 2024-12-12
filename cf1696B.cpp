#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n], zeroCount = 0;
    for (auto &a : arr) {
        cin >> a;
        if (a == 0) {
            zeroCount++;
        }
    }
    if (zeroCount == n) {
        printf("0\n");
        return;
    }
    vector<pair<int, int>> dp(n);
    int nonZeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            nonZeroCount++;
        } else {
            dp[i].first = nonZeroCount > 0;
        }
    }
    nonZeroCount = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            nonZeroCount++;
        } else {
            dp[i].second = nonZeroCount > 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (dp[i].first + dp[i].second == 2 and arr[i] == 0) {
            printf("2\n");
            return;
        }
    }
    printf("1\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}