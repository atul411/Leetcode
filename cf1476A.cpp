#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    if (k < n and n % k == 0) {
        k = n;
    } else if (k < n) {
        k = (n / k + 1) * k;
    }
    if (k % n == 0) {
        cout << k / n << "\n";
    } else {
        cout << k / n + 1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}