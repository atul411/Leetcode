#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n, a, b;
    cin >> n >> a >> b;
    if ((n + 1) / 2 <= a) {
        cout << n << "\n";
        return;
    }

    int goodaysNeeded = ((n + 1) / 2 + a - 1) / a - 1;
    int badClimatedays = goodaysNeeded * b;
    goodaysNeeded = (n + 1) / 2;

    if (goodaysNeeded + badClimatedays >= n) {
        cout << goodaysNeeded + badClimatedays << "\n";
    } else {
        cout << n << "\n";
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}