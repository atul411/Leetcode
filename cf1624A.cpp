#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int mx, mn, curr;
    while (t--) {
        mn = 1e+9 + 1;
        mx = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            mx = max(mx, curr);
            mn = min(mn, curr);
        }
        cout << (mx - mn) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}