#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, ans = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int di, si;
        cin >> di >> si;
        if (si == 1) {
            ans = min(ans, di - 1);
            continue;
        }
        int value = si - 1;
        // cout<<value<<"   ";
        if (value % 2 != 0) {
            ans = min(ans, di + value / 2 + 1);
        } else {
            ans = min(ans, di + value / 2 - 1);
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