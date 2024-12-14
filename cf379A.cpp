#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a - b + 1 > 0) {
        ans += b;
        a = a - b + 1;
    }
    cout << ans + a;
}