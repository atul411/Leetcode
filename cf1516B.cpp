#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;

    for (int i = 1; i < n; i++) {
        arr[i] ^= arr[i - 1];
    }
    bool ans = !arr[n - 1];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            ans |= (arr[i] == (arr[j] ^ arr[i])) && ((arr[n - 1] ^ arr[j]) == arr[i]);
        }
    }
    if (ans) {
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