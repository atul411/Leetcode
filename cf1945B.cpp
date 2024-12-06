#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout << (a + m) / a + (b + m) / b<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}