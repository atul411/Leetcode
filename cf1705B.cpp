#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
    }
    bool nonzeroFound = false;
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > 0) {
            ans += (long long)arr[i];
            nonzeroFound = true;
        } else if (nonzeroFound) {
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