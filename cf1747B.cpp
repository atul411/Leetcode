#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << "\n";
    } else {
        cout << n / 2 + 1 << "\n";
    }
    for (int i = 2; i < 3 * n; i += 6) {
        if (i + 1 < 3 * n) {
            cout << i << " " << (i + 1) << "\n";
        }
    }
    if (n % 2 != 0) {
        cout << 3 * n - 1 << " " << 3 * n - 2 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}