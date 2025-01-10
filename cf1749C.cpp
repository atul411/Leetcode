#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
    }
    int ans = 0;
    sort(arr.begin(), arr.end());
    for (int i = 1; i <= 200; i++) {
        auto temp = upper_bound(arr.begin(), arr.end(), i);
        if (temp - arr.begin() < 1) {
            cout << ans << "\n";
            return;
        }
        for (int j = i - 1; j >= 1; j--) {
            auto temp = upper_bound(arr.begin(), arr.end(), j);
            if (temp - arr.begin() < i - j + 1) {
                cout << ans << "\n";
                return;
            }
        }
        ans = i;
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