#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    while (t--) {
        cin >> n;
        if (n < 5) {
            cout << -1 << "\n";
        } else {
            for (int i = 2; i <= n; i += 2) {
                if (i != 4) {
                    cout << i << " ";
                }
            }
            cout << 4 << " " << 5 << " ";
            for (int i = 1; i <= n; i+=2) {
                if (i != 5) {
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}