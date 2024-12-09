#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    string str;
    cin >> n >> str;
    int curr = 1, mx = 1;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        mx = max(mx, curr);
    }
    cout << mx + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
