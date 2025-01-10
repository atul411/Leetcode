#include <bits/stdc++.h>
using namespace std;

int64_t gcd(int64_t a, int64_t b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int64_t> arr1(n);
    vector<int64_t> arr2(m);
    for (auto &a : arr1) cin >> a;
    for (auto &a : arr2) cin >> a;
    sort(arr1.begin(), arr1.end());
    int64_t gc = 0;
    for (int i = 1; i < n; i++) {
        gc = gcd(arr1[i] - arr1[0], gc);
    }
    for (int i = 0; i < m; i++) {
        cout << gcd(gc, arr1[0] + arr2[i]) << " ";
    }
}