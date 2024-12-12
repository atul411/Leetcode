#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int a, p, currPrice = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a >> p;
        currPrice = min(p, currPrice);
        ans += currPrice * a;
    }
    cout << ans;
}