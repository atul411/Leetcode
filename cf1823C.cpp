#include <bits/stdc++.h>
using namespace std;

void solve(map<int, int> &mp, int x) {
    int i = 2;
    while (i * i <= x) {
        if (x % i == 0) {
            mp[i]++;
            x /= i;
        } else {
            i++;
        }
    }
    if (x != 1) {
        mp[x]++;
    }
}

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        solve(mp, arr[i]);
    }
    int ans = 0, count = 0;
    for (auto &i : mp) {
        if (i.second >= 2) {
            ans += i.second / 2;
        }
        i.second %= 2;
        count += i.second;
    }
    ans += count / 3;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}