#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int xored = 0;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
        xored = xored ^ a;
    }
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    cout << "2\n"
         << xored << " " << (sum + xored) << "\n";
}


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}