#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, denominator = 6;
    cin >> a >> b;
    int mx = 6 - max(a, b) + 1;
    if (mx % 2 == 0) {
        mx /= 2;
        denominator /= 2;
    }
    if (mx % 3 == 0) {
        mx /= 3;
        denominator /= 3;
    }
    cout << mx << "/" << denominator;
}