#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, curr = 0, mx = 0, sum = 0;
    cin >> n;
    vector<ll> arr(n);
    for (auto &a : arr) {
        cin >> a;
        sum += a;
    }
    bool edgeTaken = true;
    for (int i = 0; i < n; i++) {
        if (edgeTaken and i == n - 1) continue;
        curr += arr[i];
        mx = max(curr, mx);
        if (curr < 0) {
            edgeTaken = false;
            curr = 0;
        }
    }
    edgeTaken = true;
    curr = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (edgeTaken and i == 0) continue;
        curr += arr[i];
        mx = max(curr, mx);
        if (curr < 0) {
            edgeTaken = false;
            curr = 0;
        }
    }
    if (sum > mx) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}