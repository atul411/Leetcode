#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll, ll> solve(ll number) {
    ll temp = number;
    while (number % 2 == 0) {
        temp--;
        number /= 2;
    }
    return {temp, number};
}
void test_case() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<pair<ll, ll>, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        pair<ll, ll> number = solve(arr[i]);
        ans += mp[number];
        mp[number]++;
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