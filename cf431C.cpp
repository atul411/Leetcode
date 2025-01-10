#include <bits/stdc++.h>
using namespace std;
#define Long long long
const Long mod = 1e9 + 7;

int main() {
    Long n, k, d;
    cin >> n >> k >> d;
    Long dp1[n + 1], dp2[n + 1];
    fill_n(dp1, n + 1, 0);
    fill_n(dp2, n + 1, 0);
    dp1[0] = 1;
    dp2[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = k; j >= 1; j--) {
            if (i - j >= 0) {
                dp1[i] = (dp1[i] + dp1[i - j]) % mod;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = d - 1; j >= 1; j--) {
            if (i - j >= 0) {
                dp2[i] = (dp2[i] + dp2[i - j]) % mod;
            }
        }
    }
    cout << (mod + dp1[n] - dp2[n]) % mod;
}