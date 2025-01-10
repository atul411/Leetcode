#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    vector<int> counter(n, 0);
    for (int i = 1; i < n; i++) {
        if (arr[i] * 2 <= arr[i - 1]) {
            counter[i] = 1;
        }
        counter[i] += counter[i - 1];
    }

    int ans = 0;
    for (int i = 0; i < n - k; i++) {
        if (counter[i + k] - counter[i] == 0) {
            ans++;
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