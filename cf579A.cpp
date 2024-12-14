#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, ans = 0;
    cin >> x;
    while (x) {
        if (x & 1) {
            ans++;
        }
        x /= 2;
    }
    cout << ans;
}