#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int64_t> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int pos = 0, neg = 0;
    int64_t x = 0, y = 0, ans = (int64_t)-1e15;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            x += a[i];
        } else if (a[i] < b[i]) {
            y += b[i];
        } else {
            pos += (a[i] > 0);
            neg += (a[i] < 0);
        }
    }
    for (int i = -neg; i <= pos; i++) {
        ans = max(ans, min(x + i, y + pos - neg - i));
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
