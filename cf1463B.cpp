#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;

    ll mx = *max_element(arr.begin(), arr.end());
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    sum -= mx;
    if (mx > sum or (sum + mx) % 2 != 0) {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main() {
    solve();
}