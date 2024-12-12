#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int a = 1;
    for (int g = 2; g * g <= n; ++g) {
        if (n % g == 0) {
            a = n / g;
            break;
        }
    }
    cout << a << ' ' << n - a << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}