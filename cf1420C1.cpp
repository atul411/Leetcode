#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, q;
    cin >> n >> q;
    ll ans = 0, lastMaxPositive = 0, lastMaxNegative = 0;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        ans = max(arr[i] + lastMaxNegative, ans);
        ans = max(-arr[i] + lastMaxPositive, ans);
        long long temp = lastMaxPositive;
        lastMaxPositive = max(lastMaxPositive, arr[i] + lastMaxNegative);
        lastMaxNegative = max(-arr[i] + temp, lastMaxNegative);
    }
    cout << ans << "\n";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        test_case();
    }
}