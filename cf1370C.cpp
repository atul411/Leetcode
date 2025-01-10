#include <bits/stdc++.h>
using namespace std;

bool hasOddDiviser(int n) {
    int x = 3;
    while (x * x <= n) {
        if (n % x == 0) {
            return true;
        }
        x += 2;
    }
    return false;
}

void solve(int n, int x) {
    if (n == 1 and x == 1) {
        printf("FastestFinger\n");
        return;
    } else if (n == 1) {
        printf("Ashishgup\n");
        return;
    }

    if (n % 2 != 0) {
        return solve(1, 1 - x);
    }
    int i = 3;
    while (i * i <= n) {
        if ((n / i) % 2 == 0 and hasOddDiviser(n / i) == false) {
            return solve(n / i, 1 - x);
        }
        i += 2;
    }
    return solve(n - 1, 1 - x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n, 1);
    }
}