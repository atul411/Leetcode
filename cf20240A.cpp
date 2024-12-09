#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << "YES\n" << 1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j and abs(arr[i] - arr[j]) % k != 0) {
                count++;
            }
        }
        if (count == n - 1) {
            cout << "YES\n" << (i + 1) << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}