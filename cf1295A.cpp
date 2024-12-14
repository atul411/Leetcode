#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string ans;
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            ans.push_back('1');
        }
    } else {
        ans.push_back('7');
        for (int i = 0; i < n / 2 - 1; i++) {
            ans.push_back('1');
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}