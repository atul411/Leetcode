#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;

    sort(arr.begin(), arr.end());
    int start = n - 1, count = 1, ans = 0;
    while (start >= 0) {
        if (arr[start] * count >= x) {
            ans++;
            count = 0;
        }
        count++;
        start--;
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