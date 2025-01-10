#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    ll medianIndex = (n - 1) / 2;
    ll median = arr[medianIndex], low = median, high = low + k;
    while (low <= high) {
        ll mid = (low + high) / 2, sum = 0;
        for (int i = medianIndex; i < n; i++) {
            sum += max(0LL, mid - arr[i]);
            if (sum > k) break;
        }
        if (sum <= k) {
            median = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << median << "\n";
}

int main() {
    solve();
}