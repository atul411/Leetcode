#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int a, b;
    while (t--) {
        cin >> a >> b;
        cout << (b - a) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}