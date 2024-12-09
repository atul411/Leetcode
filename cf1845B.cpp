#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int Xa, Ya, Xb, Yb, Xc, Yc;
    cin >> Xa >> Ya;
    cin >> Xb >> Yb;
    cin >> Xc >> Yc;

    int ans = 0;
    if (Xb > Xa and Xc > Xa) {
        ans += min(Xb - Xa, Xc - Xa);
    } else if (Xb < Xa and Xc < Xa) {
        ans += min(Xa - Xb, Xa - Xc);
    }

    if (Yb > Ya and Yc > Ya) {
        ans += min(Yb - Ya, Yc - Ya);
    } else if (Yb < Ya and Yc < Ya) {
        ans += min(Ya - Yb, Ya - Yc);
    }
    cout << ans + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}