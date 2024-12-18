#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int arr[n], whiteCount = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'W') whiteCount++;
        arr[i] = whiteCount;
    }
    int ans = k;
    for (int i = 0; i < n - k + 1; i++) {
        if (i == 0) {
            ans = min(arr[i + k - 1], ans);
        } else {
            ans = min(arr[i + k - 1] - arr[i - 1], ans);
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