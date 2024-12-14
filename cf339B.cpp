#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, ans = 0, temp, curr = 1;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (temp >= curr) {
            ans += temp - curr;
            curr = temp;
        } else {
            ans += n - curr + temp;
            curr = temp;
        }
    }
    cout << ans;
}