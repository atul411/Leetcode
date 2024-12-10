#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, ans = 0, mx = INT_MIN, mn = INT_MAX;
    cin >> n;
    long long arr[n];
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        umap[arr[i]]++;
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    mx = mx - mn;
    for (int i = 0; i < n; i++) {
        if (mx == 0) {
            ans += umap[arr[i]] - 1;
        } else {
            ans += umap[mx + arr[i]];
            ans += umap[arr[i] - mx];
        }
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