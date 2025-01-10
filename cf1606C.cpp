#include <bits/stdc++.h>
using namespace std;
#define int long long

map<int, int> mp;
vector<int> arr;
void test_case() {
    mp.clear();
    int n, k;
    cin >> n >> k;
    arr.resize(n);
    for (auto &a : arr) {
        cin >> a;
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