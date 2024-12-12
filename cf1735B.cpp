#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr[i] / (2 * arr[0] - 1);
        if (arr[i] % (2 * arr[0] - 1) == 0) ans--;
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