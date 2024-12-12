#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, x;
    cin >> n >> x;
    int ans = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = arr[0] - x, r = arr[0] + x;
    for (int i = 0; i < n; i++) {
        l = max(l, arr[i] - x);
        r = min(r, arr[i] + x);
        if (l > r) {
            ans++;
            l = arr[i] - x;
            r = arr[i] + x;
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