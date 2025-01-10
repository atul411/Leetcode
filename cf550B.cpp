#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int ans = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        int curr = arr[i], lower, upper;
        lower = max(l - curr, curr + x);
        upper = r - curr;
        if (lower > upper or upper - curr < x or lower > arr.back()) {
            continue;
        }
        auto first = lower_bound(arr.begin(), arr.end(), lower);
        auto second = upper_bound(arr.begin(), arr.end(), upper);
        if (second == arr.end()) {
            ans += (n - (first - arr.begin()));
        } else {
            second--;
            if (second - first >= 0) {
                ans += (second - first);
            }
        }
    }
    cout << ans << "\n";
}