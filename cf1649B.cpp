#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    ll sum = 0, mx = 0;
    for (auto x : arr) {
        mx = max(mx, x);
        sum += x;
    }
    if (sum == 0) {
        printf("0\n");
        return;
    }
    sum -= mx;
    if (mx <= sum + 1) {
        printf("1\n");
    } else {
        cout << (mx - sum) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}