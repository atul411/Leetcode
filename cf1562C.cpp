#include <bits/stdc++.h>
using namespace std;

map<pair<int64_t, int64_t>, int64_t> mp;

int64_t solve(int curr, int n, vector<int64_t> &arr, int64_t currHealth) {
    if (curr == n) return 0;
    int64_t x = 0, y = 0;
    if (mp.count({curr, currHealth})) {
        return mp[{curr, currHealth}];
    }
    if (currHealth + arr[curr] >= 0) {
        x = solve(curr + 1, n, arr, currHealth + arr[curr]) + 1;
    }
    y = solve(curr + 1, n, arr, currHealth);
    mp[{curr, currHealth}] = max(x , y);
    return max(x, y);
}

void solve() {
    int64_t n;
    cin >> n;
    vector<int64_t> arr(n);
    for (auto &a : arr) cin >> a;
    int ans = solve(0, n, arr, 0);
    cout << ans << "\n";
}

int main() {
    solve();
}