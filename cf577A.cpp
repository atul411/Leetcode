#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= min(n, x); i++) {
        if (x % i == 0 and x / i <= n) {
            ans++;
        }
    }
    cout << ans << "\n";
}