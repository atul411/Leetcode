#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    if (r < L) {
        cout << "1\n";
    } else if (R < l) {
        cout << "1\n";
    } else if (l == L and r == R) {
        cout << (R - L) << "\n";
    } else if (l == L or R == r) {
        cout << (min(R, r) - max(l, L) + 1) << "\n";
    } else {
        cout << (min(R, r) - max(l, L) + 2) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}