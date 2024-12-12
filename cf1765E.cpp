#include <bits/stdc++.h>
using namespace std;


void test_case() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b) {
        cout << 1 << "\n";
    } else {
        cout << (long long)ceil(n * 1.0 / a) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}