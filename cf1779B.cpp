#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int even, odd;
    if (n == 3) {
        cout << "NO\n";
        return;
    }
    if (n % 2 == 0) {
        even = 1;
        odd = -1;
    } else {
        even = 3 - n;
        odd = n - 1;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << even << " ";
        } else {
            cout << odd << " ";
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}