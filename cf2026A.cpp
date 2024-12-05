#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int x, y, k;
    while (t--) {
        cin >> x >> y >> k;
        int m = min(x, y);
        cout << "0 0 " << m << " " << m << "\n";
        cout << "0 " << m<<" "<<m<<" 0\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}