#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (b % 2 == c % 2) << " " << (a % 2 == c % 2) << " " << (a % 2 == b % 2) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}