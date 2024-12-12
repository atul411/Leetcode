#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, h, m;
    cin >> n >> h >> m;
    int currTime = h * 60 + m;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> h >> m;
        int diff = h * 60 + m - currTime;
        if (diff < 0) {
            diff = 24 * 60 + h * 60 + m - currTime;
        }
        ans = min(ans, diff);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
