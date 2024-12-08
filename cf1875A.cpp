#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll a, b, n, ans;
    cin >> a >> b >> n;
    ans = b - 1;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        ll curr = min(a, arr[i] + 1);
        ans += curr - 1;
    }
    cout << ans + 1 << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}