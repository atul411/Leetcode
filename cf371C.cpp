#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;
    vector<int64_t> arr1(3), arr2(3);
    for (auto &a : arr1) cin >> a;
    for (auto &a : arr2) cin >> a;
    int64_t bread = 0, sauce = 0, cheese = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'B') {
            bread++;
        } else if (str[i] == 'S') {
            sauce++;
        } else {
            cheese++;
        }
    }

    int64_t low = 0, high = 1e14, ans = 0, r;
    cin >> r;
    int64_t breadNeeded, sauceNeeded, cheeseNeeded;
    while (low <= high) {
        int64_t mid = (low + high) / 2;
        breadNeeded = max(mid * bread - arr1[0], int64_t(0));
        sauceNeeded = max(mid * sauce - arr1[1], int64_t(0));
        cheeseNeeded = max(mid * cheese - arr1[2], int64_t(0));
        int64_t moneyNeedd = breadNeeded * arr2[0] + sauceNeeded * arr2[1] + cheeseNeeded * arr2[2];
        if (moneyNeedd <= r) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}