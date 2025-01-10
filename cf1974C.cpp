#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    map<pii, map<int, int>> mp1, mp2, mp3;
    int ans = 0;
    for (int i = 0; i + 2 < n; i++) {
        auto a = mp1[{arr[i], arr[i + 1]}];
        auto b = mp2[{arr[i + 1], arr[i + 2]}];
        auto c = mp3[{arr[i], arr[i + 2]}];
        for (auto temp : a) {
            if (temp.first != arr[i + 2]) {
                ans += temp.second;
            }
        }
        mp1[{arr[i], arr[i + 1]}][arr[i + 2]]++;

        for (auto temp : b) {
            if (temp.first != arr[i]) {
                ans++;
            }
        }
        mp2[{arr[i + 1], arr[i + 2]}][arr[i]];

        for (auto temp : c) {
            if (temp.first != arr[i + 1]) {
                ans++;
            }
        }
        mp3[{arr[i], arr[i + 2]}][arr[i + 1]];
    }
    cout << ans << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}