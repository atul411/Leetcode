#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    string temp = "36366";
    while (t--) {
        cin >> n;
        if (n < 2 or n == 3) {
            cout << -1 << "\n";
            continue;
        }
        string ans;
        if (n % 2 == 0) {
            for (int i = 0; i < n - 2; i++) {
                ans += "3";
            }
            ans += "66";
            cout << ans << "\n";
        } else {
            for (int i = 0; i < n - 5; i++) {
                ans += "3";
            }
            ans += temp;
            cout << ans << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}