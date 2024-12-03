#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    while (t--) {
        cin >> n;
        int c1, c2;
        if (n % 3 == 0) {
            c2 = n / 3;
            c1 = n - 2 * c2;
        } else {
            c2 = n % 3 == 1 ? n / 3 : n / 3 + 1;
            c1 = n - 2 * c2;
        }
        cout << c1 << " " << c2 << "\n";
    }
}
int main() {
    int t;
    cin >> t;
    test_case(t);
}