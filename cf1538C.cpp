#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int start = lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
        int end = upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();
        ans += (end - start);
        if (2 * arr[i] >= l and 2 * arr[i] <= r) {
            ans--;
        }
    }
    cout << ans / 2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}