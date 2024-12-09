#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, q, curr = 0, temp = 0;
    long long ans = 0, k;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr <= q) {
            temp++;
        } else {
            temp = 0;
        }

        if (temp >= k) {
            ans += temp - k + 1;
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