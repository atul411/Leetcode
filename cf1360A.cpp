#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int a, b;
    while (t--) {
        cin >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        int mx = max(a, 2 * b);
        cout << min(mx * mx, (a + b) * (a + b)) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}