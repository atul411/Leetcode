#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << n << "\n";
        return;
    }
    int ans = 2;
    if (n <= 4) {
        cout << 2 << "\n";
        return;
    }
    int curr = 4;
    while ((curr + 1) * 2 < n) {
        curr = (curr + 1) * 2;
        ans++;
    }
    cout << ans + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}