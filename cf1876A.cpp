#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool lambda(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
void test_case() {
    int n, p;
    cin >> n >> p;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), lambda);
    ll ans = p, left = n - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i].second <= p and left > 0) {
            ans += (min(arr[i].first, left) * arr[i].second);
            left -= arr[i].first;
        }
    }
    if (left > 0) {
        ans += left * p;
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