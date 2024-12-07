#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, aCount = 0, ans = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'B' and aCount) {
            ans += aCount;
            aCount = 1;
        } else if (str[i] == 'A') {
            aCount++;
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