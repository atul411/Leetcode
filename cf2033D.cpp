#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long>
#define ll long long

void test_case() {
    ll n;
    cin >> n;
    vi arr(n);
    for (auto &x : arr) cin >> x;
    map<ll, ll> mp;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            ans++;
            mp.clear();
            sum = 0;
            continue;
        }
        sum += arr[i];
        if (mp.count(sum) or sum == 0) {
            ans++;
            mp.clear();
            sum = 0;

        } else {
            mp[sum]++;
        }
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