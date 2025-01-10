#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int64_t> arr(3);
    for (auto &a : arr) cin >> a;
    sort(arr.begin(), arr.end());
    if (2 * (arr[0] + arr[1]) <= arr[2]) {
        cout << (arr[0] + arr[1]) << "\n";
        return;
    }
    cout << (accumulate(arr.begin(), arr.end(), 0LL) / 3);
}

int main() {
    solve();
}