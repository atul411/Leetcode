#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    int mx = *max_element(arr.begin(), arr.end());
    int needed = (sum + n - 2) / (n - 1);
    if (needed <= mx) {
        needed = mx;
    }
    cout << (needed * (n - 1) - sum) << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}