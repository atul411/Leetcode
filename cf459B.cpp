#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, temp, mx = INT_MIN, mn = INT_MAX;
    unordered_map<int, int> umap;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        umap[arr[i]]++;
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    int diff = mx - mn;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += umap[diff + arr[i]];
    }
    if (diff == 0) {
        cout << diff << " " << n * (n - 1) / 2;
    } else {
        cout << diff << " " << ans;
    }
}